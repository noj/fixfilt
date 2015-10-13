// vim: ts=2 sw=2
#include "fix.hpp"

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iomanip>

namespace fix
{

  namespace
  {
    std::string parenthesize (std::string str) { return '(' + str + ')'; }
  }

  boost::optional<fix::Ver> parse_ver (boost::string_ref str_ver_)
  {
    std::string str_ver = str_ver_.to_string ();
    std::transform (str_ver.begin (), str_ver.end (), str_ver.begin (),
                    ::toupper);

    if (str_ver == "FIX.4.0") return fix::Ver::FIX40;
    if (str_ver == "FIX.4.1") return fix::Ver::FIX41;
    if (str_ver == "FIX.4.2") return fix::Ver::FIX42;
    if (str_ver == "FIX.4.3") return fix::Ver::FIX43;
    if (str_ver == "FIX.4.4") return fix::Ver::FIX44;
    if (str_ver == "FIX.5.0") return fix::Ver::FIX50;

    return boost::none;
  }

  Message::Field::Field () {}

  Message::Field::Field (boost::string_ref tag_, boost::string_ref value_)
    : tag (std::stoul (std::string (tag_)))
    , value (value_)
  {
  }

  Message::Field::Field (unsigned tag_, boost::string_ref value_)
    : tag (tag_)
    , value (value_)
  {
  }

  bool Message::Field::operator==(const Field & other) const
  {
    return tag == other.tag && value == other.value;
  }

  Message::Message () {}

  Message::Message (const std::string & msg, char separator)
    : content (msg)
  {
    crack (content, separator);
  }

  std::vector<boost::string_ref> split (boost::string_ref str, char separator)
  {
    std::vector<boost::string_ref> res;

    size_t start = 0;
    for (size_t i = 0; i < str.size (); ++i) {
      if (str[i] == separator) {

        if (i - start > 0) {
          res.push_back (str.substr (start, (i - start)));
        }

        start = i;
        if (start + 1 < str.size ()) start += 1;
      }
    }

    if (start != str.size ()) {
      // Add tail
      res.push_back (str.substr (start));
    }

    return res;
  }

  void Message::crack (const std::string & msg, char separator)
  {
    content = msg;

    auto str_fields = split (boost::string_ref (content), separator);

    std::vector<Field> fields_;
    fields_.reserve (str_fields.size ());

    for (auto & str_field : str_fields) {
      if (str_field.size () == 1 && str_field[0] == separator) break;

      auto msg = split (str_field, '=');
      if (msg.size () != 2)
        throw std::runtime_error ("Invalid field format: " +
                                  str_field.to_string ());

      fields_.push_back (Field (msg[0], msg[1]));
    }

    fields.swap (fields_);
  }

  boost::optional<Message::Field> Message::get_field (unsigned tag) const
  {
    auto it =
      std::find_if (fields.begin (), fields.end (),
                    [&](const Message::Field & f) { return f.tag == tag; });
    if (it == fields.end ()) return boost::none;

    return *it;
  }

  boost::optional<Ver> Message::get_version () const
  {
    if (auto field = get_field (8)) return parse_ver (field->value);
    return boost::none;
  }

  std::ostream & operator<<(std::ostream & os, const Message::Field & field)
  {
    return os << field.tag << '|' << field.value;
  }

  std::ostream & operator<<(std::ostream & os, const Message & msg)
  {
    for (const auto & field : msg.fields) {
      os << field;
    }

    return os;
  }

  Expander::Expander (const Message & msg_, char separator_, bool pretty_)
    : msg (msg_)
    , separator (separator_)
    , pretty (pretty_)
  {
    if (auto fix_ver = msg.get_version ()) schema = fix::get_schema (*fix_ver);
  }

  std::ostream & operator<<(std::ostream & os, const Expander & exp)
  {
    for (auto fiter = exp.msg.fields.cbegin ();
         fiter != exp.msg.fields.cend ();) {

      const Message::Field & field = *fiter;

      const auto it = exp.schema.find (field.tag);
      if (it != exp.schema.end ()) {
        const FieldDef & def = it->second;

        if (exp.pretty)
          os << std::setfill (' ') << std::setw (4) << std::right << field.tag
             << ' ' << std::setw (15) << std::left << parenthesize (def.name)
             << std::setw (1) << " = " << std::setw (8) << field.value;
        else
          os << field.tag << '(' << def.name << ")=" << field.value;

        const auto val_it = def.values.find (std::string (field.value));
        if (val_it != def.values.end ()) os << parenthesize (val_it->second);
      } else {
        if (exp.pretty)
          os << std::setfill (' ') << std::setw (4) << std::right << field.tag
             << std::setw (1) << " = " << std::setw (8) << std::left
             << field.value;
        else
          os << field.tag << '=' << field.value;
      }

      if (++fiter != exp.msg.fields.cend ()) os << exp.separator;
    }

    return os;
  }

  std::ostream & operator<<(std::ostream & os, Ver ver)
  {
    switch (ver) {
      case Ver::FIX40: return os << "FIX40";
      case Ver::FIX41: return os << "FIX41";
      case Ver::FIX42: return os << "FIX42";
      case Ver::FIX43: return os << "FIX43";
      case Ver::FIX44: return os << "FIX44";
      case Ver::FIX50: return os << "FIX50";
      default: return os << "UNKNOWN";
    }
  }
}

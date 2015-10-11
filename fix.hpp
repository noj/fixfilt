// vim: ts=2 sw=2
#pragma once

#include <string>
#include <map>
#include <vector>
#include <iosfwd>
#include "boost/utility/string_ref.hpp"
#include "boost/optional.hpp"

namespace fix
{

  enum class Ver {
    FIX40,
    FIX41,
    FIX42,
    FIX43,
    FIX44,
    FIX50,
  };

  boost::optional<fix::Ver> parse_ver (boost::string_ref str_ver_);

  struct FieldDef {
    using ValueMap = std::map<std::string, std::string>;

    FieldDef () {}

    FieldDef (unsigned number_, const std::string & name_,
              const ValueMap & values_ = ValueMap ())
      : number (number_)
      , name (name_)
      , values (values_)
    {
    }

    unsigned number{0};
    std::string name;

    ValueMap values;
  };

  using Schema = std::map<unsigned, FieldDef>;

  const Schema & get_schema (Ver ver);
  const Schema & get_schema (boost::string_ref str_ver);

  struct Message {
    struct Field;

    Message ();
    Message (const std::string & msg, char separator = '\001');

    void crack (const std::string & msg, char separator = '\001');

    boost::optional<Field> get_field (unsigned tag) const;

    //! Tries to extract the FIX version.
    boost::optional<Ver> get_version () const;

    struct Field {

      Field ();
      Field (boost::string_ref tag_, boost::string_ref value_);
      Field (unsigned tag_, boost::string_ref value_);

      bool operator==(const Field & other) const;

      unsigned tag;
      boost::string_ref value;
    };

    std::vector<Field> fields;
    std::string content;
  };

  std::ostream & operator<<(std::ostream & os, const Message::Field & field);
  std::ostream & operator<<(std::ostream & os, const Message & msg);

  struct Expander {
    Expander (const Message & msg, char separator = '|', bool pretty = false);

    const Message & msg;
    fix::Schema schema;
    char separator;
    bool pretty;
  };

  std::ostream & operator<<(std::ostream & os, const Expander &);

  std::ostream & operator<<(std::ostream & os, Ver);
}

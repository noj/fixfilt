// vim: ts=2 sw=2
#pragma once

#include <string>
#include <map>
#include <vector>
#include <iosfwd>
#include <string_view>
#include <optional>

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

  std::optional<fix::Ver> parse_ver (std::string str_ver);

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
  const Schema & get_schema (std::string_view str_ver);

  struct Message {
    struct Field;

    Message ();
    Message (const std::string & msg, char separator = '\001');

    void crack (const std::string & msg, char separator = '\001');

    std::optional<Field> get_field (unsigned tag) const;

    //! Tries to extract the FIX version.
    std::optional<Ver> get_version () const;

    struct Field {

      Field ();
      Field (std::string_view tag_, std::string_view value_);
      Field (unsigned tag_, std::string_view value_);

      bool operator==(const Field & other) const;

      unsigned tag;
      std::string_view value;
    };

    void sort_fields ();

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

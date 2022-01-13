// vim: ts=2 sw=2
#include "fix.hpp"

#include <algorithm>

#include "gen/fix40.hpp"
#include "gen/fix41.hpp"
#include "gen/fix42.hpp"
#include "gen/fix43.hpp"
#include "gen/fix44.hpp"
#include "gen/fix50.hpp"

#include <map>
#include <stdexcept>

namespace fix
{
  static std::map<unsigned, Schema> schemas = {
    {static_cast<unsigned> (Ver::FIX40), FIX40::load_schema ()},
    {static_cast<unsigned> (Ver::FIX41), FIX41::load_schema ()},
    {static_cast<unsigned> (Ver::FIX42), FIX42::load_schema ()},
    {static_cast<unsigned> (Ver::FIX43), FIX43::load_schema ()},
    {static_cast<unsigned> (Ver::FIX44), FIX44::load_schema ()},
    {static_cast<unsigned> (Ver::FIX50), FIX50::load_schema ()},
  };

  const Schema & get_schema (Ver ver)
  {
    return schemas[static_cast<unsigned> (ver)];
  }

  const Schema & get_schema (std::string_view str_ver)
  {
    if (auto ver = parse_ver (std::string (str_ver)))
      return get_schema (*ver);

    throw std::runtime_error ("Unknown fix version: " + std::string (str_ver));
  }
}

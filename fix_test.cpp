// vim: ts=2 sw=2
#include "fix.hpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <sstream>

TEST_CASE ("fix basics")
{
  {
    fix::Message msg ("", '|');
    REQUIRE (msg.fields.size () == 0);
  }

  {
    fix::Message msg ("35=A", '|');
    REQUIRE (msg.fields.size () == 1);
    REQUIRE (msg.fields[0] == fix::Message::Field (35, "A"));
  }

  {
    fix::Message msg ("35=A|43=2", '|');
    REQUIRE (msg.fields.size () == 2);
    REQUIRE (msg.fields[0] == fix::Message::Field (35, "A"));
    REQUIRE (msg.fields[1] == fix::Message::Field (43, "2"));
  }
}

TEST_CASE ("fix get_field")
{
  fix::Message msg ("8=FIX.4.4|35=8|49=ZONK|56=FOO|6=0|11=ABC123", '|');
  REQUIRE (msg.get_field (4711) == std::nullopt);
  REQUIRE (msg.get_field (35)->value == "8");
}

TEST_CASE ("fix parse_ver")
{
  REQUIRE (fix::parse_ver ("foo") == std::nullopt);
  REQUIRE (*fix::parse_ver ("FIX.4.3") == fix::Ver::FIX43);
}

TEST_CASE ("fix SimpleExpand")
{
  fix::Message msg ("8=FIX.4.3|35=A|43=N", '|');

  std::ostringstream ss;
  ss << fix::Expander (msg);

  REQUIRE (ss.str () ==
           "8(BeginString)=FIX.4.3|35(MsgType)=A(LOGON)|43(PossDupFlag)=N(NO)");
}

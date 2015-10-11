// vim: ts=2 sw=2
#include "fix.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "boost/optional/optional_io.hpp"

TEST_CASE ("Basic", "[Fix]")
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

TEST_CASE ("get_field", "[Fix]")
{
  fix::Message msg ("8=FIX.4.4|35=8|49=ZONK|56=FOO|6=0|11=ABC123", '|');
  REQUIRE (msg.get_field (4711) == boost::none);
  REQUIRE (msg.get_field (35)->value == "8");
}

TEST_CASE ("parse_ver", "[Fix]")
{
  REQUIRE (fix::parse_ver ("foo") == boost::none);
  REQUIRE (*fix::parse_ver ("FIX.4.3") == fix::Ver::FIX43);
}

TEST_CASE ("SimpleExpand", "[Fix]")
{
  fix::Message msg ("8=FIX.4.3|35=A|43=N", '|');

  std::ostringstream ss;
  ss << fix::Expander (msg);

  REQUIRE (ss.str () ==
           "8(BeginString)=FIX.4.3|35(MsgType)=A(LOGON)|43(PossDupFlag)=N(NO)");
}

// vim: ts=2 sw=2
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "fix.hpp"

#include <unistd.h>

int main (int argc, char ** argv)
{
  try {

    std::string version = "FIX.4.3";
    char delimiter = '\001';
    bool list = false;
    char output_delimiter = '|';
    bool pretty = false;
    bool sort = false;
    bool query_mode = false;
    std::string query;

    int opt = 0;

    while ((opt = getopt (argc, argv, "d:pv:lsq:")) != -1) {
      switch (opt) {
        case 'd': delimiter = *optarg; break;
        case 'p':
          pretty = true;
          output_delimiter = '\n';
          break;
        case 'v': version = optarg; break;
        case 'l': list = true; break;
        case 's': sort = true; break;
        case 'q': query_mode = true; query = optarg; break;
        default:
          std::cerr << "usage: " << argv[0]
                    << " [-d delimiter char] [-p] [-v fix version] [-l] [-q query]\n";
          exit (EXIT_FAILURE);
          break;
      }
    }

    if (list || query_mode) {
      const fix::Schema & schema =
        fix::get_schema (boost::string_ref (version));

      std::transform (query.begin (), query.end (), query.begin (), toupper);

      std::cout << std::setfill (' ') << std::setw (5) << "Tag"
                << "  " << std::left << std::setw (30) << "Name" << std::endl;
      std::cout
        << "-----  --------------------------------------------------------"
        << std::endl;

      for (const auto & pair : schema) {

        if (query_mode) {
          std::string upper_name = pair.second.name;
          std::transform (upper_name.begin (), upper_name.end (), upper_name.begin (), toupper);

          if (! (std::to_string (pair.first) == query ||
                 upper_name.find (query) != std::string::npos))
            continue;
        }

        std::cout << std::setfill (' ') << std::setw (5) << std::right
          << pair.first << "  " << std::setw (40) << std::left
          << pair.second.name << std::endl;

        for (const auto & value : pair.second.values) {
          std::cout << "       | " << std::setw (4) << value.first << " -> "
            << value.second << std::endl;
        }
      }
    } else {
      std::string line;
      while (std::getline (std::cin, line)) {
        try {
          fix::Message msg (line, delimiter);
          if (sort)
            msg.sort_fields ();
          std::cout << fix::Expander (msg, output_delimiter, pretty) << std::endl;
        } catch (const std::exception & e) {
          std::cerr << e.what () << std::endl;
        }
      }
    }

    return EXIT_SUCCESS;
  } catch (const std::exception & e) {
    std::cerr << "Error: " << e.what () << std::endl;
    return EXIT_FAILURE;
  }
}

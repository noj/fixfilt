project('fixfilt', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++17'])

ext_inc_dir = include_directories('ext')

fix_lib = library(
  'fix', ['fix.cpp', 'fixdb.cpp', 'gen/fix40.cpp', 'gen/fix41.cpp', 
          'gen/fix42.cpp', 'gen/fix43.cpp', 'gen/fix44.cpp', 'gen/fix50.cpp'], 
  include_directories: ext_inc_dir)

test_lib = library('test_lib', ['test_main.cpp'], include_directories: ext_inc_dir)

executable(
  'fixfilt', 'fixfilt.cpp', 
  install : true, link_with : fix_lib, include_directories: ext_inc_dir)

t = executable(
  'fix_test', 'fix_test.cpp', link_with : [fix_lib, test_lib], include_directories: ext_inc_dir)
test('basic fix test', t)

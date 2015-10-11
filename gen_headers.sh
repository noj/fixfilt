#!/bin/sh

git submodule update --init

mkdir -p gen
python2 gen.py ext/quickfix/spec/FIX40.xml gen/fix40.hpp
python2 gen.py ext/quickfix/spec/FIX41.xml gen/fix41.hpp
python2 gen.py ext/quickfix/spec/FIX42.xml gen/fix42.hpp
python2 gen.py ext/quickfix/spec/FIX43.xml gen/fix43.hpp
python2 gen.py ext/quickfix/spec/FIX44.xml gen/fix44.hpp
python2 gen.py ext/quickfix/spec/FIX50.xml gen/fix50.hpp

clang-format -i gen/*.hpp


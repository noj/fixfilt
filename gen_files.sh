#!/bin/sh

git submodule update --init

mkdir -p gen
versions=(40 41 42 43 44 50)
for ver in ${versions[@]}; do
  python gen.py ext/quickfix/spec/FIX$ver.xml $ver gen
done

clang-format -i gen/*.{hpp,cpp}

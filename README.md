# FIX Filter (or the FIX snuttefilt)

Working with [FIX](http://www.fixtradingcommunity.org/) can be painful. This
little utility can make your life simpler.

## Features

These are the main features:

### Pretty printing

Pretty print FIX messages so that a human may read the contents.

### List FIX version schema

This dumps the tool's knowledge about a specfic protocol
version. Handy when you want to look something up.


### Query field

This searches through the tool's FIX version db for matching field tags /
names and prints matches.

## Building

You can choose to use either [meson](https://mesonbuild.com/) or
[CMake](https://cmake.org/).

[Ninja](https://ninja-build.org/) is required.

```sh
make meson # or make cmake if you so prefer
make
```

## Build status

[![CMake](https://github.com/noj/fixfilt/actions/workflows/cmake.yml/badge.svg)](https://github.com/noj/fixfilt/actions/workflows/cmake.yml)

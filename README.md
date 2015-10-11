# FIX Filter (or the FIX snuttefilt)

Working with [FIX](http://www.fixtradingcommunity.org/) can be painful. This
little utility can make your life simpler.

## Features

There are two main features, the first, and main feature is to pretty print
FIX messages so that a human may read the contents.

The second feature simply dumps the tool's knowledge about a specfic protocol
version. Handy when you want to look something up.


## Building

CMake is used:

```sh
mkdir build
cd build
cmake ..
make -j4
```


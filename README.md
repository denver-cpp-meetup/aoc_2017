North Denver Metro C++ Meetup's Coding Dojo: [Advent of Code 2017](https://adventofcode.com/2017)

# AoC Intro
- 25 short programming problems released in December every year
- 2 parts, the 2nd extends the 1st

# Setup, Tools, and Environment
- Docker Build Environment ([Dockerfile](Dockerfile))
- Ubuntu 17.10 (Artful Aardvark)
- Clang 5.0 w/ libc++
- C++17
- CMake
- GoogleTest with GUnit wrapper (Catch2 is optional)
- Boost 1.62.0
- Emacs/Vim

# Proceedings
- Test Driven Development
- [Mob programming](https://en.wikipedia.org/wiki/Mob_programming)
- 5 minute rotation OR ping-pong
- Start with first 2017 AoC and see how far we get
- Discuss

# Build

Compiles debug mode by default.

To build and run unit tests:

```
mkdir build
cd build
cmake ../cpp-template
make
```

To build an optimized version:
```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../cpp-template
make
```

Binary is located in the build directory under the version you build:
release or debug.

GUnit/GoogleTest is enabled by default. Switch to catch in the file
`test/CMakeLists.txt`.
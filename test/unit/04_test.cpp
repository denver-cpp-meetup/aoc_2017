#include <GUnit.h>

#include "04.hpp"

using namespace aoc;

GTEST("AOC 2017: 04") {
  SHOULD("accept empty string") { EXPECT_TRUE(aoc::is_valid("")); }
  SHOULD("example 1") {
    EXPECT_TRUE(aoc::is_valid("aa bb cc dd ee"));
  }
  SHOULD("example 2") {
    EXPECT_FALSE(aoc::is_valid("aa bb cc dd aa"));
  }
  SHOULD("space at the end") {
    EXPECT_FALSE(aoc::is_valid("aa bb cc dd aa "));
  }
  SHOULD("multiple spaces") {
    EXPECT_TRUE(aoc::is_valid("aa  bb  cc dd"));
  }
}

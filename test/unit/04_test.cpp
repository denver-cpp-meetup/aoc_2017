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
    EXPECT_TRUE(aoc::is_valid("aa bb cc dd "));
  }
  SHOULD("multiple spaces") {
    EXPECT_TRUE(aoc::is_valid("aa  bb  cc dd"));
  }
  SHOULD("example 3") {
    EXPECT_TRUE(aoc::is_valid("aa bb cc dd aaa"));
  }
  SHOULD("part 2 ex 1") { EXPECT_TRUE(aoc::is_valid("abcde fghij")); }
  SHOULD("part 2 ex 2") {
    EXPECT_FALSE(aoc::is_valid("abcde xyz ecdab"));
  }
  SHOULD("part 2 ex 3") {
    EXPECT_TRUE(aoc::is_valid("a ab abc abd abf abj"));
  }
  SHOULD("part 2 ex 4") {
    EXPECT_TRUE(aoc::is_valid("iiii oiii ooii oooi oooo"));
  }
  SHOULD("part 2 ex 5") {
    EXPECT_FALSE(aoc::is_valid("oiii ioii iioi iiio"));
  }
}

#include <GUnit.h>

#include "01.hpp"

using namespace aoc;

GTEST("AOC 2017: 01") {
  SHOULD("empty produces 0") { EXPECT_EQ(0, captcha("")); }
  SHOULD("single char produces 5") { EXPECT_EQ(5, captcha("5")); }
  SHOULD("1122 produces 3") { EXPECT_EQ(3, captcha("1122")); }
  SHOULD("1111 produces 4") { EXPECT_EQ(4, captcha("1111")); }
  SHOULD("1234 produces 0") { EXPECT_EQ(0, captcha("1234")); }
  SHOULD("91212129 produces 9") { EXPECT_EQ(9, captcha("91212129")); }
}

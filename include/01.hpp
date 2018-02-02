#include <algorithm>
#include <cassert>
#include <experimental/string_view>
#include <numeric>
namespace aoc {
int captcha(std::experimental::string_view test) {
  int accum = 0;
  for (std::size_t i = 0; i < test.size(); ++i) {
    if (test[i] == test[(i + 1) % test.size()]) {
      accum += test[i] - '0';
    }
  }
  return accum;
}
} // namespace aoc

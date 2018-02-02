#include <algorithm>
#include <experimental/string_view>
namespace aoc {
int captcha(std::experimental::string_view test) {
  constexpr auto to_int = [](const auto pos) { return *pos - '0'; };
  int accum = 0;
  for (auto pos =
           std::adjacent_find(std::cbegin(test), std::cend(test));
       pos != std::cend(test);
       pos = std::adjacent_find(std::next(pos), std::cend(test))) {
    accum += to_int(pos);
  }

  if (not test.empty() and test.front() == test.back()) {
    accum += to_int(std::cbegin(test));
  }
  return accum;
}
} // namespace aoc

#include <algorithm>
#include <experimental/string_view>
#include <numeric>
namespace aoc {
int captcha(std::experimental::string_view test) {
  constexpr auto to_int = [](const auto pos) { return pos - '0'; };
  int accum = 0;
  if (test.empty()) {
    return {};
  }
  std::accumulate(std::begin(test), std::end(test), test.back(),
                  [&](const auto cur, const auto next) {
                    if (cur == next) {
                      accum += to_int(cur);
                    }
                    return next;
                  });
  return accum;
}
} // namespace aoc

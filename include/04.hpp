#include <boost/algorithm/string.hpp>
#include <experimental/string_view>
#include <unordered_set>

namespace aoc {

bool is_valid(std::experimental::string_view s) {
  using namespace std::experimental;
  std::unordered_set<std::string> strings{};
  std::vector<std::string> words{};
  boost::split(words, s, boost::is_any_of(" "));
  for (const auto &word : words) {
    if (not strings.insert(word).second) {
      return false;
    }
  }
  return true;
}
} // namespace aoc

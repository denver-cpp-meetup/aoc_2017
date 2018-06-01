#include <boost/tokenizer.hpp>
#include <experimental/string_view>
#include <unordered_set>

namespace aoc {

bool is_valid(std::experimental::string_view s) {
  using namespace std::experimental;
  std::unordered_set<std::string> strings{};
  for (auto word :
       boost::tokenizer<boost::char_delimiters_separator<char>,
                        string_view::const_iterator>(std::cbegin(s),
                                                     std::cend(s))) {
    std::sort(std::begin(word), std::end(word));
    if (not strings.insert(word).second) {
      return false;
    }
  }
  return true;
}
} // namespace aoc

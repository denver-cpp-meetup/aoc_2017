#include <04.hpp>
#include <fstream>
#include <iostream>

int main(int argc, [[maybe_unused]] char **argv) {
  if (argc <= 1) {
    std::cerr << "Provide input file on command line.\n";
    return 1;
  }
  std::ifstream f(argv[1]);
  int count = 0;
  for (std::string input; std::getline(f, input);) {
    count += aoc::is_valid(input) ? 1 : 0;
  }
  std::cout << count << "\n";
  return {};
}

#include <01.hpp>
#include <fstream>
#include <iostream>

int main(int argc, [[maybe_unused]] char **argv) {
  if (argc <= 1) {
    std::cerr << "Provide input file on command line.\n";
    return 1;
  }
  std::ifstream f(argv[1]);
  std::string input;
  std::getline(f, input);
  std::cout << "Part 1: " << aoc::captcha(input) << '\n';
  std::cout << "Part 2: " << aoc::captcha2(input) << '\n';
  return {};
}

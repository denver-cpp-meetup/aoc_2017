#include <fstream>
#include <iostream>

int main(int argc, [[maybe_unused]] char **argv) {
  if (argc <= 1) {
    std::cerr << "Provide input file on command line."
              << "\n";
    return 1;
  }
  return {};
}

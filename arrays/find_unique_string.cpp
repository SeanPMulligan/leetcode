#include <iostream>
#include <array>
#include <string>

bool isUnique(std::string s) {
  std::array<int, 127> alpha = {0};

  for (char c : s) {
    int n = int(c);

    if (alpha[n] != 0) {
      return false;
    }

    alpha[n] = 1;
  }

  return true;
}

int main() {
  std::string unique = "abcdefg";
  std::string nonUnique = "AAAAA";

  std::cout << "Unique should be true : " << isUnique(unique) << std::endl;
  std::cout << "Unique should be true : " << isUnique(nonUnique) << std::endl;
}

#include <vector>
#include <iostream>

int main() {
  std::vector<std::vector<int>> matrix = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8}
  };
  int x = 0;
  int y = 0;
  int xLen = matrix[0].size();
  int yLen = matrix.size();
  int sum = 0;

  while (x < xLen && y < yLen) {
    sum += matrix[x++][y++];
  }
  std::cout << sum << std::endl;
}

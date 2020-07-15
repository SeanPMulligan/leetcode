/*
Given an n by n integer matrix, return the sum of all elements that form a Z in the matrix. For example, given:

1 2 3
4 5 6
7 8 9
The Z that's formed is [1, 2, 3, 5, 7, 8, 9] and its sum is 35.

Constraints
n <= 1000

Example 1
Input
matrix = [[1, 2, 3],
[4, 5, 6],
[7, 8, 9]]

Output
35
*/

#include <vector>
class Solution {
  public:
  int solve(std::vector<std::vector<int>>& matrix) {
    int sum = 0;
    
    if (matrix.size() == 0) return sum;
    
    for (int n1 : matrix[0]) {
        sum += n1;
    }
    
    if (matrix.size() == 1) return sum;
    
    for (int n2 : matrix[matrix.size()-1]) {
        sum += n2;
    }
    
    int len = matrix.size() - 1;
    int i = 1;
    int j = matrix[0].size() - 2;
    
    while (i < len || j < 0) {
        sum += matrix[i++][j--];
    }
    
    return sum;
  }
};

/* Explaination: */
/* First, return 0 if matrix is empty. Second, sum the top row of integers. If the matrix size is */
/* 1 return sum otherwise also sum the bottom row of integers. Finally, traverse the matrix diagonally */
/* adding to the sum as you traverse until you reach the last row of the matrix. */

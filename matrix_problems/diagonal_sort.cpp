/*
https://leetcode.com/problems/sort-the-matrix-diagonally/

Given a m * n matrix mat of integers, sort it diagonally in ascending order
from the top-left to the bottom-right then return the sorted array.

Input: mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
Output: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]
*/

#include <vector>
class Solution {
public:
  std::vector<std::vector<int>> diagonalSort(std::vector<std::vector<int>>& mat) {
    int rowLen = mat.size();
    int colLen = mat[0].size();
    int row = rowLen - 1;
    int col = 0;
    
    while (row > 0 || col < colLen) {
      std::vector<int> nums;
      int currRow = row;
      int currCol = col;
      
      while (currRow < rowLen && currCol < colLen) {
        nums.push_back(mat[currRow][currCol]);
        currRow++;
        currCol++;
      }
      
      std::sort(nums.begin(), nums.end());
      
      currRow = row;
      currCol = col;
      int i = 0;
      
      while (currRow < rowLen && currCol < colLen) {
        mat[currRow][currCol] = nums[i++];
        currRow++;
        currCol++;
      }
      
      if (row - 1 < 0) {
        col++;
      } else {
        row--;
      }
    }
    
    return mat;
  }
};

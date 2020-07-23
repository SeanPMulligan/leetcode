/*
https://leetcode.com/problems/set-matrix-zeroes/

Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

Example 1:

Input: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
*/

#include <vector>

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
      int const FLAG = -100000;
      
      for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
          if (matrix[i][j] == 0) {
            for (int k = 0; k < matrix[i].size(); k++) {
              if (matrix[i][k] != 0) matrix[i][k] = FLAG; 
            }
        
            for (int h = 0; h < matrix.size(); h++) {
              if (matrix[h][j] != 0) matrix[h][j] = FLAG;
            }
          }
        }
      }

      
      for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
          if (matrix[i][j] == FLAG) matrix[i][j] = 0;
        }
      }
    }
};

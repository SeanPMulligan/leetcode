/*
https://leetcode.com/problems/pascals-triangle/

Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/

#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> result;
    
    if (numRows == 0)
      return result;
    
    result.push_back(std::vector<int> {1});
    
    if (numRows == 1)
      return result;
    
    result.push_back(std::vector<int> {1,1});
    
    std::vector<int> prev = result[1];
    int len = 2;
    
    while (len < numRows) {
      std::vector<int> inner {1};
      int i = 0;
      int j = 1;
      
      while (j < prev.size()) {
        int n = prev[i++] + prev[j++];
        inner.push_back(n);
      }
      
      inner.push_back(1);
      result.push_back(inner);
      prev = result[len++];
    }
    
    return result;
  }
};

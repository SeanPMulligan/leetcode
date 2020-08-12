/*
Given an integer n, return whether it is equal to the
sum of its own digits raised to the power of the number of digits.

Input
n = 153

Output
true
*/

#include <vector>
#include <cmath>

class Solution {
  public:
    bool solve(int n) {
      std::vector<int> nums;
      int sum = 0;
      int nTemp = n;
      
      while (nTemp > 0) {
          int num = nTemp % 10;

          nums.push_back(num);
          nTemp /= 10;
      }
      
      int size = nums.size();
      
      for (int num : nums) {
          sum += pow(num, size);
      }
      
      return sum == n;
    }
};

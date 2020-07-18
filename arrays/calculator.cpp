/*
Given a list of integers nums, a string op representing either "+", "-", "/", or "*",
and an integer val, perform the operation on every number in nums with val and return the result.

Note: "/" is integer division.

Example 1
Input

nums = [3, 1, 6]
op = "+"
val = 4
Output

[7, 5, 10]
*/
#include <vector>
#include <string>

class Solution {
  public:
  std::vector<int> solve(std::vector<int>& nums, std::string op, int val) {
    std::vector<int> result;
    int i = 0;

    while (i < nums.size()) {
      switch(op[0]) {
        case '+' :
          result.push_back(nums[i] + val);
          break;
        case '-' :
          result.push_back(nums[i] - val);
          break;
        case '/' :
          result.push_back(nums[i] / val);
          break;
        case '*' :
          result.push_back(nums[i] * val);
          break;
      }
      i++;
    }
    
    return result;
  }
};

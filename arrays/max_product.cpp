/*
Given a list of integers, find the largest product of two distinct elements.

Example 1
Input

nums = [5, 1, 7]
Output

35
*/

#include <vector>
class Solution {
  public:
  int solve(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int len = nums.size() - 1;
    
    int rhs = nums[len] * nums[len-1];
    int lhs = nums[0] * nums[1];
    
    if (rhs > lhs) return rhs;
    
    return lhs;
  }
};

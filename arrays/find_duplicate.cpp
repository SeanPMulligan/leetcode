/*
You are given an array of length n + 1 picked from the range 1, 2, ..., n.
By the pigeonhole principle, there must be a duplicate. Find and return it.
There is guaranteed to be exactly one duplicate.

Input
nums = [1, 2, 3, 1]

Output
1
*/

#include <vector>

class Solution {
  public:
  int solve(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int result = -1;
    
    for (int i = 0; i < nums.size() - 2; i++) {
      if (nums[i] == nums[i+1]) {
        result = nums[i];
        break;
      }
    }

    return result;
  }
};


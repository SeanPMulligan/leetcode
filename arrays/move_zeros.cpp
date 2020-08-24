/*
https://leetcode.com/problems/move-zeroes/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include <vector>

class Solution {
public:
  void moveZeroes(std::vector<int>& nums) {
    int i = 0;
    int j = 0;
    
    while (j < nums.size()) {
      if (nums[j] != 0) {
        std::swap(nums[i++], nums[j]);
      }
      j++;
    }
  }
};

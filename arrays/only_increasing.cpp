/*
Given an list of numbers, determine whether the list is strictly increasing or strictly decreasing.

Input
nums = [1, 2, 3, 4, 5]

Output
true

Explaination:
First, we want to return true immediately if the input is empty. Then we determine
the starting direction and set a direction flag. Using the direction flag we determine
if we are increasing or decreasing in the correct order, returning false if not.
*/

#include <vector>
class Solution {
  public:
  bool solve(std::vector<int>& nums) {
    if (nums.size() == 0) return true;
    
    bool increasing = nums[0] < nums[1] ? true : false;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (increasing) {
            if (nums[i] >= nums[i+1]) {
                return false;
            }
        } else {
            if (nums[i] <= nums[i+1]) {
                return false;
            }
        }
    }
    
    return true;
  }
};

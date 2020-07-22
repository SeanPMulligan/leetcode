/*
Given a list of integers nums, remove numbers that appear
multiple times in the list, while maintaining order of the appearance in the original list.

Constraints

Length of nums is at most 5000.

Input
nums = [1, 3, 5, 0, 3, 5, 8]

Output
[1, 0, 8]
*/

#include <vector>

class Solution {
public:
  std::vector<int> solve(std::vector<int>& nums) {
    //std::set<int> numbers;
    std::vector<int> result;
    bool dup = false;
    
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (i == j) {
          continue;
        } else if (nums[i] == nums[j]) {
          dup = true;
        }
      }
      
      if (!dup) {
        result.push_back(nums[i]);
      }
      dup = false;
    }
    
    return result;
  }
};

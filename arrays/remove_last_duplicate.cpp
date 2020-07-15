/*
Given a list of integers nums, find all duplicate numbers and delete their last occurrences.

For example, given [1, 3, 4, 1, 3, 5] return [1, 3, 4, 5].

Constraints

Length of nums <= 10000

Example 1
Input
nums = [1, 3, 4, 1, 3, 5]

Output
[1, 3, 4, 5]
*/

#include <vector>
#include <map>
class Solution {
  public:
  std::vector<int> solve(std::vector<int>& nums) {
    std::map<int, int> count;
    
    for (int num : nums) {
        auto it = count.find(num);
        if (it != count.end()) {
            it->second++;
        } else {
            count[num] = 1;
        }
    }
    
    for (int i = nums.size() - 1; i > 0; i--) {
        auto it = count.find(nums[i]);
        if (it->second != 1) {
            nums.erase(nums.begin()+i);
            it->second = 1;
        }
    }
    
    return nums;
  }
};
/*
Explaination:

First, build a num frequency map. Then iterate over the input vector again from the end to beginning
removing the first occurrence that occurs in the map with a count greater than 1.
*/

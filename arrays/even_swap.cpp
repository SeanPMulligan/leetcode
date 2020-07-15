/*
Given an integer list nums, swap every consecutive even integer with each other.

Input
nums = [2, 3, 4, 6, 8]

Output
[4, 3, 2, 8, 6]

Explaination:
Time complexity: O(N)
Space complexity: O(1)

Using two pointers we traverse the vector checking first if nums[i] and nums[j]
are both even and swap if so. If only nums[i] is even we need to keep searching
the vector for the next even integer. Otherwise both nums[i] and nums[j] are odd
and we can simply continue traveling the vector.
*/

#include <vector>
class Solution {
  public:
  std::vector<int> solve(std::vector<int>& nums) {
    int i = 0;
    int j = 1;
    
    while (j < nums.size()) {
        if (nums[i] % 2 == 0 && nums[j] % 2 == 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i = j + 1;
            j = i + 1;
        } else if (nums[i] % 2 == 0 && nums[j] % 2 != 0) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    
    return nums;
  }
};

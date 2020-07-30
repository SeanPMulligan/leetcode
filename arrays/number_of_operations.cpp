/*
You are given a list of integers nums. Consider an operation where we select some
subset of integers in the list and increment all of them by one.

Return the minimum number of operations needed to make all values in the list equal to each other.

Constraints
1 ≤ n ≤ 100,000 where n is the length of nums
0 ≤ nums[i] ≤ 10**9 for all 0 ≤ i < n

Input
nums = [1, 3, 0]

Output
3
*/
#include <vector>

class Solution {
  public:
  int solve(std::vector<int>& nums) {
    int largest = -1000000;
    int smallest = 1000000;
    
    for (int num : nums) {
      if (num > largest) {
        largest = num;
      }
      
      if (num < smallest) {
        smallest = num;
      }
    }
    
    return largest - smallest;
  }
};

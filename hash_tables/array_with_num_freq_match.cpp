/*
Given a list of integers nums, return whether there's an integer whose frequency in the list is same as its value.

Input
nums = [7, 9, 3, 3, 3]

Output
true
*/

#include <map>
#include <vector>

class Solution {
  public:
  bool solve(std::vector<int>& nums) {
    std::map<int, int> freq;
    
    for (int num : nums) {
      auto it = freq.find(num);
      
      if (it == freq.end()) {
        freq[num] = 1;
      } else {
        it->second++;
      }
    }
    
    for (auto count : freq) {
      if (count.first == count.second) {
        return true;
      }
    }
    
    return false;
  }
};

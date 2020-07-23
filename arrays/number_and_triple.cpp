/*
Given a list of integers nums, return whether a number and its triple exist in the list.

Constraints

n ≤ 100,000 where n is the length of nums.
Example 1
Input

nums = [2, 3, 10, 7, 6]
Output

true
*/

#include <vector>
#include <set>

class Solution {
  public:
  bool solve(std::vector<int>& nums) {
    if (nums.size() < 2) return false;
    
    std::set<int> triples;
    int zeroCount = 0;

    for (int num1 : nums) {
      triples.insert(num1);
      if (num1 == 0) zeroCount++;
    }
    
    //if (zeroCount >= 2) return true;
    
    for (int num2 : nums) {
      int triple = num2 * 3;
      
      if (num2 == 0 && zeroCount < 2) {
        continue;
      } 
      
      if (triples.find(triple) != triples.end()) {
        return true;
      }
    }
    
    return false;
  }
};

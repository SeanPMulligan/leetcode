/*
https://leetcode.com/problems/shuffle-string/

Given a string s and an integer array indices of the same length.

The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.

Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.
*/

#include <string>
#include <vector>

class Solution {
public:
  std::string restoreString(std::string s, std::vector<int>& indices) {
    std::string result(s.length(), ' ');
      for (int i = 0; i < indices.size(); i++) {
        result[indices[i]] = s[i];
      }
               
    return result;
  }
};

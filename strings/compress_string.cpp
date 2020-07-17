/*
Given a string s, eliminate consecutive duplicate characters from the string and return it.

That is, if a list contains repeated characters, they should be replaced with a single copy
of the character. The order of the elements should not be changed.

Constraints

Length of s is at most 5000.
Example 1
Input

s = "aaaaaabbbccccaaaaddf"
Output

"abcadf"
*/

#include <string>

class Solution {
  public:
  std::string solve(std::string s) {
    char curr = s[0];
    std::string result = "";
    
    result += curr;
    
    for (char c : s) {
      if (c != curr) {
        curr = c;
        result += curr;
      }
    }
    
    return result;
  }
};

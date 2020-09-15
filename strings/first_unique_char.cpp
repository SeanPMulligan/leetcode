/*
https://leetcode.com/problems/first-unique-character-in-a-string

Given a string, find the first non-repeating character in it and return its
index. If it doesn't exist, return -1.

s = "leetcode"
return 0

s = "loveleetcode"
return 2
*/

#include <array>
#include <string>

class Solution {
public:
    int firstUniqChar(std::string s) {
      std::array<int, 26> charCount {0};
      
      for (char c : s) {
        int ord = int(c) - 97;
        
        charCount[ord]++;
      }
      
      for (int i = 0; i < s.length(); i++) {
        int ord = int(s[i]) - 97;
        
        if (charCount[ord] == 1)
          return i;
      }
      
      return -1;
    }
};

/*
Given two strings s0 and s1, return whether they are anagrams of each other.
Two words are anagrams when you can rearrange one to become the other.
For example, "listen" and "silent" are anagrams.

Input
s0 = "listen"
s1 = "silent"

Output
true
*/

#include <array>
#include <string>

class Solution {
  public:
  bool solve(std::string s0, std::string s1) {
    std::array<int, 127> alphabet = {};
    
    for (char c1 : s0) {
        alphabet[int(c1)]++;
    }
    
    for (char c2 : s1) {
        alphabet[int(c2)]--;
    }
    
    for (int num : alphabet) {
        if (num != 0) {
            return false;
        }
    }
    
    return true;
  }
};

/*
https://leetcode.com/problems/string-matching-in-an-array/

Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

Example:

Input: words = ["mass","as","hero","superhero"]

Output: ["as","hero"]
*/

#include <string>
#include <vector>

class Solution {
public:
  std::vector<std::string> stringMatching(std::vector<std::string>& words) {
    std::vector<std::string> result;
    for (int i = 0; i < words.size(); i++) {
      for (int j = 0; j < words.size(); j++) {
        if (i == j) continue;
        if (words[i].size() > words[j].size()) continue;
        if (words[j].find(words[i]) != std::string::npos) {
          result.push_back(words[i]);
          break;
        }
      }
    }
    return result;
  }
};

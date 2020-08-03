/*
Given two strings s0 and s1, each representing a sentence, return
the number of unique words that are shared between the two sentences.

Note: words are case-insensitive so "hello" and "Hello" are the same word.

Input
s0 = "hello world hello oyster"
s1 = "world is your oyster"

Output
2
*/

#include <string>
#include <set>

class Solution {
  public:
  int solve(std::string s0, std::string s1) {
    std::set<std::string> shared;
    int result = 0;
    std::string curr;
    
    for (int i = 0; i <= s0.length(); i++) {
        if (s0[i] == ' ') {
            shared.insert(curr);
            curr = "";
        } else {
            curr += tolower(s0[i]);
        }
    }
    
    shared.insert(curr);
    
    curr = "";
    
    for (int j = 0; j <= s1.length(); j++) {
        if (s1[j] == ' ') {
           if (shared.find(curr) != shared.end()) {
               result++;
               shared.erase(curr);
           }

           curr = "";
        } else {
            curr += tolower(s1[j]); 
        }
    }
    
    if (shared.find(curr) != shared.end()) {
        result++;
    }
    
    return result;
  }
};

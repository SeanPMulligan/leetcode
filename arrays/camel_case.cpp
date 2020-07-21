/*
Given a list of strings words, concatenate the strings in camel case format.

Example 1
Input

words = ["java", "beans"]
Output

"javaBeans"
*/

#include <vector>
#include <string>

class Solution {
public:
  std::string solve(std::vector<std::string>& words) {
    std::string result = "";
    
    for (int i = 0; i < words.size(); i++) {
      if (i == 0) {
        result += std::tolower(words[i][0]);
      } else {
        result += std::toupper(words[i][0]);
      }
      
      for (int j = 1; j < words[i].size(); j++) {
        result += std::tolower(words[i][j]);
      }
    }
    
    return result;
  }
};

/*
Given n, return a string of stairs of size n. For example given n = 4 return

   *
  **
 ***
****

Note: Each line in the string is separated by a newline separator, or \n.
*/

#include <string>

class Solution {
  public:
    std::string solve(int n) {
      int i = 1;
      std::string result = "";
      
      while (i <= n) {
          int spaces = n - i;
          
          for (int k = 0; k < spaces; k++) {
              result += " ";
          }
          
          for (int j = 0; j < i; j++) {
              result += "*";
          }
          
          if (i != n) {
             result += "\n"; 
          }
          
          i++;
      }
      
      return result;
    }
};

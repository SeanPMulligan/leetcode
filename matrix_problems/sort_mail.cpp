/*
You are given a list of mailboxes. Each mailbox is a list of strings, where each
string is either "junk", "personal", "work". Go through each mailbox in round robin
order starting from the first one, filtering out junk, to form a single pile and return the pile.

Input
mailboxes = [["work", "personal"],
["junk", "personal", "junk"],
["work"]]

Output
["work", "work", "personal", "personal"]
*/

#include <vector>
#include <string>

class Solution {
  public:
  std::vector<std::string> solve(std::vector<std::vector<std::string>>& mailboxes) {
    std::vector<std::string> result;
    
    int col = 0;
    int longest = 0;
    
    for (std::vector<std::string> mail : mailboxes) {
        if (mail.size() > longest) {
            longest = mail.size();
        }
    }
    
    while (col < longest) {
        for (int i = 0; i < mailboxes.size(); i++) {
            if (col >= mailboxes[i].size()) {
                continue;
            } else if (mailboxes[i][col] != "junk") {
                result.push_back(mailboxes[i][col]);
            }
        }
        
        col++;
    }
    
    return result;
  }
};

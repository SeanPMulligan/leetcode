/*
Given a two dimensional list of integers votes, where each list has two
elements [candidate_id, voter_id], report whether any voter has voted more than once.

Example 1
Input

votes = [[3, 1],
[3, 0],
[3, 4],
[3, 3],
[3, 2]]
Output

false
*/

#include <set>
#include <vector>

class Solution {
  public:
  bool solve(std::vector<std::vector<int>>& votes) {
    std::set<int> voters;
    
    for (std::vector<int> vote : votes) {
      if (voters.find(vote[1]) != voters.end()) {
        return true;
      } else {
        voters.insert(vote[1]);
      }
    }
    
    return false;
  }
};

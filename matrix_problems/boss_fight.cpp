/*
You are given a list of integers fighters and a two dimensional list bosses.
The fighters list contains 1s and 0s with a 1 representing a fighter.
Similarly, each bosses list contains 1s and 0s with a 1 representing a boss.

Given that fighters can beat a bosses row if it contains more fighters than
bosses, return a new bosses matrix with defeated boss rows removed.

Input
fighters = [0, 1, 1]
bosses = [[0, 0, 0],
[0, 0, 1],
[0, 1, 1],
[1, 1, 1]]

Output
[[0, 1, 1],
[1, 1, 1]]
*/

#include <vector>

class Solution {
  public:
    std::vector<std::vector<int>> solve(std::vector<int>& fighters, std::vector<std::vector<int>>& bosses) {
    int numFighters = 0;
    std::vector<std::vector<int>> result;
    
    for (int f : fighters) {
        if (f == 1) numFighters++;
    }
    
    for (int i = 0; i < bosses.size(); i++) {
        int numBosses = 0;
        
        for (int j = 0; j < bosses[i].size(); j++) {
            if (bosses[i][j] == 1) numBosses++;
        }
        
        if (numBosses >= numFighters) {
            result.push_back(bosses[i]);
        }
    }
    
    return result;
  }
};

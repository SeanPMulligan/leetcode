/*
Given a list of integers prices representing prices of cars
for sale, and a budget k, return the maximum number of cars you can buy.

Input
prices = [90, 30, 20, 40, 90]
k = 95

Output
3
*/

#include <vector>

class Solution {
  public:
  int solve(std::vector<int>& prices, int k) {
    std::sort(prices.begin(), prices.end());
    
    int total = 0;
    int sum = 0;
    
    for (int i = 0; i < prices.size(); i++) {
      sum += prices[i];
      
      if (sum > k) {
        break;
      } else {
        total++;
      }
    }
    
    return total;
  }
};

/*
https://leetcode.com/problems/climbing-stairs/
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Input: 2
Output: 2
*/

#include <array>

class Solution {
public:
  int climbStairs(int n) {
    std::array<int, 1000000> memo = {0};
    memo[0] = 1;
    memo[1] = 1;
    memo[2] = 1;
    
    for (int i = 2; i <= n; i++) {
      memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
  };
};

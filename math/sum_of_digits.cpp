/*
Given a positive integer num, return the sum of its digits.

Bonus: Can you do it without using strings?

Input
num = 123

Output
6
*/

class Solution {
  public:
  int solve(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
  }
};

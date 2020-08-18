/*
https://leetcode.com/problems/kth-missing-positive-number/

Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Find the kth positive integer that is missing from this array.

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
*/

#include <vector>

class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
      int positiveCount = 0;
      int currMissing = 1;
      int i = 0;
      
      while (positiveCount < k) {
        if (i < arr.size() && arr[i] == currMissing) {          
          i++;
        } else {
          positiveCount++;
        }
        currMissing++;
      }
      
      return currMissing - 1;
    }
};

/*
You are given a list of integers tasks and another list of integers people. The integer
tasks[i] represents the amount of strength required to perform the ith task. people[i]
represents the amount of strength the ith person has.

Return the number of tasks that can be finished if one person can perform at most one task.

Constraints
Length of tasks, people <= 10000

Example 1
Input
tasks = [3, 2, 9, 13]
people = [10, 5, 2, 1]

Output
3
*/

#include <vector>
class Solution {
  public:
  int solve(std::vector<int>& tasks, std::vector<int>& people) {
    std::sort(tasks.begin(), tasks.end(), std::greater<int>());
    std::sort(people.begin(), people.end(), std::greater<int>());
    int i = 0;
    int j = 0;
    int result = 0;
    
    while (i < tasks.size() && j < people.size()) {
        if (people[j] >= tasks[i]) {
            i++;
            j++;
            result++;
        } else {
            i++;
        }
    }
    
    return result;
  }
};

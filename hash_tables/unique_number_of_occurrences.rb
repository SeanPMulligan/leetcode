=begin
https://leetcode.com/problems/unique-number-of-occurrences/

Given an array of integers arr, write a function that returns true if and only
if the number of occurrences of each value in the array is unique.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values
have the same number of occurrences.

Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
=end

# @param {Integer[]} arr
# @return {Boolean}
def unique_occurrences(arr)
  num_count = {}
  unique_set = Set.new

  arr.each do |num|
    if num_count[num]
      num_count[num] += 1
    else
      num_count[num] = 1
    end
  end

  num_count.values.each do |val|
    return false if unique_set.include?(val)

    unique_set.add(val)
  end

  true
end
=begin
https://leetcode.com/problems/majority-element/

Given an array of size n, find the majority element. The majority element is the
element that appears more than [ n/2 ] times.

You may assume that the array is non-empty and the majority element always exist
in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
=end

# @param {Integer[]} nums
# @return {Integer}
def majority_element(nums)
  num_count = {}
  majority = nums.length / 2.0

  nums.each do |num|
    if num_count[num]
      num_count[num] += 1
    else
      num_count[num] = 1
    end

    return num if num_count[num] > majority
  end
end

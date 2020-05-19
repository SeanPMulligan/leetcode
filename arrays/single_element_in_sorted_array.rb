=begin
https://leetcode.com/problems/single-element-in-a-sorted-array/

You are given a sorted array consisting of only integers where every element
appears exactly twice, except for one element which appears exactly once. Find
this single element that appears only once.

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
=end

# @param {Integer[]} nums
# @return {Integer}
def single_non_duplicate(nums)
  return nums[0] if nums.length < 2

  i = nums.length
  j = 0

  while j < i
    return nums[j] if nums[j + 1] != nums[j]

    j += 2
  end
end

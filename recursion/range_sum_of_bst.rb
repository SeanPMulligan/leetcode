=begin
https://leetcode.com/problems/range-sum-of-bst/submissions/

Given the root node of a binary search tree, return the sum of values of all
nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.

Example 1:

Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32
Example 2:

Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23
=end

# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @param {Integer} l
# @param {Integer} r
# @return {Integer}
def range_sum_bst(root, left, right)
  sum = 0

  calculate_sum = lambda do |node|
    return if node.nil?

    sum += node.val if node.val >= left && node.val <= right

    calculate_sum.call(node.left)
    calculate_sum.call(node.right)
  end

  calculate_sum.call(root)

  sum
end

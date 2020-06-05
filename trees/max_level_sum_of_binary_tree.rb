=begin
https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/

Given the root of a binary tree, the level of its root is 1, the level of its
children is 2, and so on.

Return the smallest level X such that the sum of all the values of nodes at
level X is maximal.

Example 1:

          1
         / \
        7   0
       / \
      7   -8

Input: [1,7,0,7,-8,null,null]
Output: 2

Explanation:
Level 1 sum = 1.
Level 2 sum = 7 + 0 = 7.
Level 3 sum = 7 + -8 = -1.
So we return the level with the maximum sum which is level 2.

Note:
The number of nodes in the given tree is between 1 and 10^4.
-10^5 <= node.val <= 10^5

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
# @return {Integer}
def max_level_sum(root)
  queue = []
  sum = 0
  current_level = 0
  largest_level = 0
  queue.push(root)

  while (!queue.empty?) do
    temp = []
    temp_sum = 0

    while (!queue.empty?) do
      node = queue.shift
      temp_sum += node.val

      temp.push(node.left) if node.left
      temp.push(node.right) if node.right
    end

    queue = temp
    current_level += 1

    if temp_sum > sum
      sum = temp_sum
      largest_level = current_level
    end
  end

  largest_level
end

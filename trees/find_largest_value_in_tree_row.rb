=begin
https://leetcode.com/problems/find-largest-value-in-each-tree-row/

You need to find the largest value in each row of a binary tree.

Example:
Input:

          1
         / \
        3   2
       / \   \
      5   3   9

Output: [1, 3, 9]
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
# @return {Integer[]}
def largest_values(root)
  return [] if root.nil?

  queue = []
  result = [root.val]
  queue.push(root)

  while !queue.empty? do
    temp = []

    while !queue.empty? do
      node = queue.pop

      temp.push(node.left) if node.left

      temp.push(node.right) if node.right
    end

    next if temp.empty?

    result.push(temp.map(&:val).max)
    queue = temp
  end

  result
end

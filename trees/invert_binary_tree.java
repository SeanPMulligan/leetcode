/**
https://leetcode.com/problems/invert-binary-tree/description/

Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9

Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1

 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
  public TreeNode invertTree(TreeNode root) {
    if (root == null) {
      return root;
    }
    
    TreeNode tempNode = root.left;
    root.left = root.right;
    root.right = tempNode;
    
    invertTree(root.left);
    invertTree(root.right);
    
    return root;
  }
}
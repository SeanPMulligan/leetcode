 struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <vector>
#include <queue>
#include <iostream>

class Solution {
public:
  void levelOrder(TreeNode* root) {
   if(!root) return;

   std::queue<TreeNode*> nodes;
   nodes.push(root);

   TreeNode* front;
   std::vector<int> level;

   while(!nodes.empty()){
     int size = nodes.size(); 
     level.reserve(size);

     for(int i=0;i<size;i++){
         front = nodes.front();
         nodes.pop();
         std::cout << front->val << "\t";
         level.push_back(front->val);
         if(front->left) nodes.push(front->left);
         if(front->right) nodes.push(front->right);
   }

   level.clear();
   }
   std::cout << std::endl;
  }
};

int main() {
  TreeNode five = {5};
  TreeNode seven = {7};
  TreeNode nine = {9};
  TreeNode twenty = {20, &five, &seven};
  TreeNode root = {3, &nine, &twenty};
  Solution s;

  s.levelOrder(&root);
}

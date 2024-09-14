/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
public: 
    int Diameter = 0;
    
    int height(TreeNode *root){
    if(!root){
      return 0;
    }
        
        int left_height = height(root -> left);
        int right_height = height(root -> right);
        
        int Curr_Diameter = left_height + right_height;
         Diameter = max(Diameter, Curr_Diameter);
        return max(left_height, right_height)+1;
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return Diameter;
    }
};
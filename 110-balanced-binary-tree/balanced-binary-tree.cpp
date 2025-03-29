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


    int height(TreeNode* root){
        if(!root){
            return 0;
        }

        int leftheight = height(root -> left);
        int rightheight = height(root -> right);
         int ans =   max(leftheight , rightheight) + 1;
         return ans;
    }
    bool isBalanced(TreeNode* root) {
        
        if(!root){
            return true;
        }
        
        int left_Height = height(root -> left);
        int right_Height = height(root -> right);
         
         int compare = abs(left_Height - right_Height) <= 1;
         
        bool leftAns = isBalanced(root -> left);
        bool rightAns = isBalanced(root -> right);

        if(compare && leftAns && rightAns) {
            return true;
        }
     
       else{
        return false;
       }



    }
};
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
        if(root == NULL){
        return NULL;
        }
        int leftheight = height(root -> left);
        int rightheight = height(root -> right);
         int finalAns = max(leftheight, rightheight)+1;
        return finalAns;

    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
           return true;
        }
        
        int leftheight = height(root -> left);
        int rightheight = height(root -> right);
         
       
        int diff = abs(leftheight - rightheight);
        
        int currNode = (diff <= 1);
        
        int leftAns = isBalanced(root -> left);
        int rightAns = isBalanced(root -> right);
        
        if(currNode && leftAns && rightAns)
        {
        return true;
        }        
        
        else{
           return false;
        }
        
    }
};
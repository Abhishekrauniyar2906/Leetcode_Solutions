
class Solution {
public:

   bool isBalance = true;

    int height(TreeNode* root){
        if(!root)return 0;

        int leftAns = height(root -> left);
        int rightAns = height(root -> right);

        if(isBalance && abs(leftAns - rightAns) > 1){
            isBalance = false;
        }
        return max(leftAns, rightAns) + 1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return isBalance;
    }
};
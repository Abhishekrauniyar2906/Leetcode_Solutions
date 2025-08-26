
class Solution {
public:
    bool is_Balanced = true;

    int height(TreeNode* root){
      if(!root) return 0;

      int lh = height(root -> left);
      int rh = height(root -> right);
      if(is_Balanced && abs(lh - rh) > 1){
        is_Balanced = false;
      }
      return max(lh, rh) + 1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return is_Balanced;
      
    }
};
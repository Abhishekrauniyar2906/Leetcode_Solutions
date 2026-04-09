
class Solution {
public:

   bool solve(TreeNode* root, int targetSum, int sum){
     if (!root) return false;
      sum += root -> val;

      

      if(root -> left == NULL && root -> right == NULL){
      return sum == targetSum;
   }
   return solve(root -> left, targetSum, sum) || solve(root -> right, targetSum, sum);
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
      if(!root) return false;
        int sum = 0;
       return solve(root, targetSum, sum);
    }
};
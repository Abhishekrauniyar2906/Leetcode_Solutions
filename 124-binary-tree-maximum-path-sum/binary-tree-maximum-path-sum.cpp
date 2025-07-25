
class Solution {
public:
    
     
    int solve(TreeNode* root, int &res){
      if(!root) return 0;
       
       // hypothesis
       int l = max(0,solve(root -> left, res));
       int r = max(0,solve(root -> right, res));
        int ans = root -> val + l + r;
      res = max(res, ans);
       return root -> val + max(l, r); 
       }
     
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
         solve(root, res);
        return res;
      
    }
};
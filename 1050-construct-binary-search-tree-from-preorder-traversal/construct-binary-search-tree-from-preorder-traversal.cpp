
class Solution {
public:
   
    TreeNode* solve(vector<int> &preorder, int &i, long long upperBound){
     if(i == preorder.size() || preorder[i] > upperBound) return NULL;

     TreeNode* root = new TreeNode(preorder[i++]);
      
      root -> left = solve(preorder, i, root -> val);
      root -> right = solve(preorder, i, upperBound);
      return root;
      
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      int i = 0;
      return  solve(preorder, i, LLONG_MAX);
      

    }
};
class Solution {
public:

  void inorder(TreeNode* root, vector<int> &arr){
    
    if(!root){
        return;
        
    }

     inorder(root -> left, arr);

     arr.push_back(root -> val);

     inorder(root -> right, arr);
  }
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;

        vector<int>ans;

        inorder(root, ans);

        for(int i = 0; i < ans.size() - 1; i++){
            minDiff = min(minDiff, abs(ans[i] - ans[i + 1]));
        }

        return minDiff;
    }
};
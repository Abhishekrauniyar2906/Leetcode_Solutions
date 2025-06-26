
class Solution {
public:
   int result = -1;
   int count = 0;
    void inorder(TreeNode* root, int k){
      if(!root || result != -1) return;
      
      inorder(root -> left, k);
      count++;

      if(count == k){
        result = root -> val;
        return;
      }

      inorder(root -> right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        inorder(root,k);
        return result;
    }
};
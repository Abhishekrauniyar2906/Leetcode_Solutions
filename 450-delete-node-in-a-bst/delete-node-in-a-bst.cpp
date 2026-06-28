


class Solution {
public:
    
   
    TreeNode* maxValue(TreeNode* root) {
        // code here
       
            while(root -> right != NULL){
                root = root -> right;
            }
        
        
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int target) {
               if(!root) return NULL;
          
      if(root -> val == target){
        if(root -> left == NULL && root -> right == NULL){
          delete root;
          return NULL;
        }
        else if(root -> left != NULL && root -> right == NULL){
          TreeNode* currentRoot = root -> left;
          delete root;
          return currentRoot;
        }
        else if(root -> left == NULL && root -> right != NULL){
          TreeNode* currentRoot = root -> right;
          delete root;
          return currentRoot;  
        }
        else if(root -> left != NULL && root -> right != NULL){
          TreeNode* maxNode = maxValue(root -> left);
          root -> val = maxNode -> val;
          root -> left = deleteNode(root -> left, maxNode -> val);
          return root;
        }
      }
        else if(root -> val > target){
         root -> left = deleteNode(root -> left, target);
        }
        else{
         root -> right = deleteNode(root -> right, target);
        }
      
      return root;
    }
};
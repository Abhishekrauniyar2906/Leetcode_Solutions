
class Solution {
public:

   TreeNode* maxValue(TreeNode* root){
    if(!root){
        return NULL;
    }

      while(root -> right != NULL){
        root = root -> right;
      }

      return root;
   }
    TreeNode* deleteNode(TreeNode* root, int key) {
         if(!root){
        return NULL;
    }

           
           if(root -> val == key){
            // case 1 :

            if(root -> left == NULL && root -> right == NULL){
                return NULL;
            }
                //   case 2
            else if(root -> left == NULL && root -> right != NULL){
                TreeNode* childSubtree = root -> right;
                delete root;
                return childSubtree;
            }
             

            //  case 3
            else if(root -> left != NULL && root -> right == NULL){
              TreeNode* childSubtree = root -> left;
                delete root;
                return childSubtree;
            }
          
        //    case 4
         
         else{
            //root -> left != NULL && root -> right != NULL
            // it is also known as successor and right side predecessor
                TreeNode* maxNode = maxValue(root -> left);
                root -> val = maxNode -> val;

                root -> left = deleteNode(root -> left, maxNode -> val);
                return root;

         }
           }

           else if(root -> val > key){
            root -> left = deleteNode(root -> left, key);
           }

           else{
            root -> right = deleteNode(root -> right, key);
           }

           return root;
    }
};

class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* current = root;

        while(current != NULL){
            if(current -> left){
                TreeNode* predecessor = current -> left;

                while(predecessor -> right){
               predecessor = predecessor -> right;
                }

                     predecessor -> right = current -> right;
                    current -> right = current -> left;
                    current -> left = NULL;
                }
                current = current -> right;
            }
            
        }


    
};
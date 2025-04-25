
class Solution {
public:

  TreeNode* createBST(vector<int>&preorder, int lowerbound, int upperbound, int &i){
       if(i >= preorder.size()){
        return NULL;
       }
        TreeNode* root = NULL;
       if(preorder[i] > lowerbound && preorder[i] < upperbound){
         root = new TreeNode(preorder[i++]);

         root -> left = createBST(preorder, lowerbound, root -> val, i);
         root -> right = createBST(preorder, root -> val, upperbound, i);
       }
       return root;
   }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lowerbound = INT_MIN;
        int upperbound = INT_MAX;
         int i = 0;
       return createBST(preorder, lowerbound, upperbound, i);
       
    }
};

class Solution {
public:
       
    bool isvalidBST(TreeNode* root, long long lowerbound, long long upperbound){
        if(!root){
            return true;
        }


     bool cond1 = (root -> val > lowerbound && root -> val < upperbound);

     bool cond2 = (isvalidBST(root -> left, lowerbound, root -> val) && isvalidBST(root -> right, root -> val, upperbound));


     return cond1 && cond2;
    }
   
    bool isValidBST(TreeNode* root) {
        
     bool ans = isvalidBST(root, LLONG_MIN, LLONG_MAX);

     return ans;
    }
};
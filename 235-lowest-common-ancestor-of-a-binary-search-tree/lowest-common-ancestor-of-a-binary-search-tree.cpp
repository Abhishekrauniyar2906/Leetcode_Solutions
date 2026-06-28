

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p == NULL) return q;
        if(q == NULL) return p;
        if(p -> val == root -> val || q -> val == root -> val) return root;


        if(p -> val > root -> val && q -> val > root -> val){
         root = lowestCommonAncestor(root -> right, p, q);
        }
        else if(p -> val < root -> val && q -> val < root -> val){
          root = lowestCommonAncestor(root -> left, p, q);
        }
        return root;
    }
};
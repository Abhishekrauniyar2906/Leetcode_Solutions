
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p == root || q == root || !root) return root;
        if(p != NULL && q == NULL) return p;
        if(p == NULL && q != NULL) return q;

        TreeNode* l = lowestCommonAncestor(root -> left, p, q);
        
        TreeNode* r = lowestCommonAncestor(root -> right, p, q);

        if(l == NULL) return r;
        else if(r == NULL) return l;
        return root;
    }
};
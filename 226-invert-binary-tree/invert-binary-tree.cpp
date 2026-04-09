
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        invertTree(root -> left);
        invertTree(root -> right);
        TreeNode* temp = root -> right;
        root -> right = root -> left;
        root -> left = temp;
        return root;
    }
};
class Solution {
public:

    int height(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) {
            return 0;
        }

     
        int leftDiameter = diameterOfBinaryTree(root->left);

     
        int rightDiameter = diameterOfBinaryTree(root->right);

        int rootDiameter = height(root->left) + height(root->right);

        
        return max(rootDiameter, max(leftDiameter, rightDiameter));
    }
};

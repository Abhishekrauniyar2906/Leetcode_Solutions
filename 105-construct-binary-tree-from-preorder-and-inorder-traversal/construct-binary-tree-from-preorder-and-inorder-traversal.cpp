class Solution {
public:
    int index = 0;  

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if (start > end) {
            return NULL;
        }

        int rootVal = preorder[index++];
        
        int i = start;
        
        for (i = start; i <= end; i++) {
            if (inorder[i] == rootVal) {
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        root->left = solve(preorder, inorder, start, i - 1);
        root->right = solve(preorder, inorder, i + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return solve(preorder, inorder, 0, n - 1);
    }
};

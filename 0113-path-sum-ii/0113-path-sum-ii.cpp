class Solution {
public:
    
    void pathSum2(TreeNode* root, int targetSum, int sum, vector<int>& temp, vector<vector<int>>& ans) {
        if (!root) {
            return;
        }

        // Add the current node's value to the path sum and to the temp vector
        sum += root->val;
        temp.push_back(root->val);

        // If we are at a leaf node, check if the current sum equals targetSum
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == targetSum) {
                ans.push_back(temp);  // Add the valid path to the answer
            }
        }

        // Recur for the left and right subtrees
        pathSum2(root->left, targetSum, sum, temp, ans);
        pathSum2(root->right, targetSum, sum, temp, ans);

        // Backtrack: remove the last node from the temp vector
        temp.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        vector<vector<int>> ans;
        pathSum2(root, targetSum, 0, temp, ans);  // Start recursion with sum 0
        return ans;
    }
};

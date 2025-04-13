class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int,int>>> q; // {node, {row, col}}
        q.push({root, {0, 0}});

        map<int, map<int, multiset<int>>> mp; // col -> row -> multiset<val>

        while (!q.empty()) {
            auto front = q.front();
            q.pop();

            TreeNode* node = front.first;
            int row = front.second.first;
            int col = front.second.second;

            mp[col][row].insert(node->val); 

            if (node->left) {
                q.push({node->left, {row + 1, col - 1}});
            }
            if (node->right) {
                q.push({node->right, {row + 1, col + 1}});
            }
        }

        for (auto& [col, rows] : mp) {
            vector<int> vertical;
            for (auto& [row, nodes] : rows) {
                vertical.insert(vertical.end(), nodes.begin(), nodes.end());
            }
            ans.push_back(vertical);
        }

        return ans;
    }
};

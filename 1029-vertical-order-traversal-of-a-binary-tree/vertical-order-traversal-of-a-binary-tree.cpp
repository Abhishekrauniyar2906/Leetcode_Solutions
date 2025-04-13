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

        for (auto& it: mp) {
             auto &colMap= it.second;
            vector<int> vertical;
            for (auto& colMapit : colMap) {
                auto &mset = colMapit.second;
                vertical.insert(vertical.end(), mset.begin(), mset.end());
            }
            ans.push_back(vertical);
        }

        return ans;
    }
};

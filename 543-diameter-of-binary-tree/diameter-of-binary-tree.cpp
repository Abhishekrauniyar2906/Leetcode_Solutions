
class Solution {
public:

    pair<int,int> solve(TreeNode* root){
        if(!root) return {0, 0};

        auto l = solve(root -> left);
        auto r = solve(root -> right);

        int h = max(l.first, r.first) + 1;
        int d = max(l.first + r.first ,max(l.second, r.second));
        return {h, d};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).second;
    }
};
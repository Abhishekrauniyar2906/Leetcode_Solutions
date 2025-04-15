
class Solution {
public:


    pair<int,int> robin(TreeNode* root){
        if(!root){
            return {0, 0};
        }

        auto left = robin(root -> left);
        auto right = robin(root -> right);
          
        int a = root -> val + left.second + right.second;

        int b = max(left.first, left.second) + max(right.first, right.second);

        return {a, b};

    }
    int rob(TreeNode* root) {
        auto ans = robin(root);
        return max(ans.first , ans.second);
    }
};
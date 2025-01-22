class Solution {
public:
    bool check(TreeNode* root,long lowerbound,long upperbound){
        if(root==NULL){
            return true;
        }
        if(root->val <= lowerbound || root->val >= upperbound){
            return false;
        }
        bool left = check(root->left,lowerbound,(root->val));
        bool right = check(root->right,(root->val),upperbound);
        bool ans = left && right;
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        long lowerbound = LONG_MIN;
        long upperbound = LONG_MAX;
        return check(root,lowerbound,upperbound);
    }
};
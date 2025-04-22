
class Solution {
public:

    void inorder(TreeNode* root, vector<int> &arr){
        if(!root){
            return;
        }

        inorder(root -> left, arr);
        arr.push_back(root -> val);
        inorder(root -> right, arr);

    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>arr;
        inorder(root, arr);

        int minDiff = INT_MAX;

        for(int i = 0; i < arr.size() - 1; i++){
            minDiff = min(minDiff, abs(arr[i] - arr[i + 1]));
        }
      return minDiff;
    }
};
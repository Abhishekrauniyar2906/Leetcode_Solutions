
class Solution {
public:

    int outputsum(TreeNode* root, int low, int high, int &sum){
        if(!root){
            return sum;
        }

        if(root -> val >= low && root -> val <= high){
            sum += root -> val;
        }

        outputsum(root -> left,  low,  high,  sum);
         outputsum(root -> right,  low,  high,  sum);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        return outputsum(root, low, high, sum);

    }
};
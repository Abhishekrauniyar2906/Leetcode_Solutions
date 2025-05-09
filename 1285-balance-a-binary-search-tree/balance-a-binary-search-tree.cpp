class Solution {
public:

    void inorder(TreeNode* root, vector<int> &in){
        if(!root){
            return;
        }

        inorder(root -> left, in);
        in.push_back(root -> val);
        inorder(root -> right, in);
    }

    TreeNode* buildTree(vector<int> &in, int s, int e){
        
        if(s > e){
            return NULL;
        }

           int mid = (s + e) >> 1;
        TreeNode* root = new TreeNode(in[mid]);

        root -> left = buildTree(in, s, mid - 1);
        root -> right = buildTree(in, mid + 1, e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>in;

        inorder(root, in);
         
         return buildTree(in, 0, in.size() - 1);



    }
};
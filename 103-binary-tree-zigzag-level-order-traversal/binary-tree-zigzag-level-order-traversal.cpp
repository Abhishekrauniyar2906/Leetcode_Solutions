/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
         
         if(!root){
            return result;
         }
        queue<TreeNode*>q;
        q.push(root);
        
        bool LtoRdir = true;


        while(!q.empty()){
            int levelsize = q.size();
            vector<int> ans(levelsize);

            for(int i = 0; i < levelsize; i++){
                TreeNode* front = q.front();
                q.pop();

             int index = LtoRdir ? i : levelsize - i - 1;

             ans[index] = front -> val;

             if(front -> left){
                q.push(front -> left);
             }

             if(front -> right){
                q.push(front -> right);
             }
             
            }
              
                 result.push_back(ans);
             LtoRdir = !LtoRdir;
        }
              return result;
    }
};
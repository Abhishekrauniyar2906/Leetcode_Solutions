
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
        if(!root) return ans;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
         int len = q.size();
         vector<int>levelans;
         for(int i = 0; i < len; i++){
             TreeNode* frontVal = q.front();
             q.pop();
             levelans.push_back(frontVal -> val);
             if(frontVal -> left != NULL){
              q.push(frontVal -> left);
             }

             if(frontVal -> right != NULL){
              q.push(frontVal -> right);
             }
         }
         ans.push_back(levelans);
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
      if(!root) return ans;
        
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
          vector<int>res;
          int len = q.size();

          for(int i = 0; i < len; i++){
            TreeNode* front = q.front();
            q.pop();
            res.push_back(front -> val);

            if(front -> left != NULL){
              q.push(front -> left);
            }

            if(front -> right != NULL){
              q.push(front -> right);
            }
          }
          ans.push_back(res);
        }
        return ans;
    }
};
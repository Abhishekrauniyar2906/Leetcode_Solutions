
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        bool LtoR = true;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
          int len = q.size();
          vector<int>level(len);

          for(int i = 0; i < len; i++){
            TreeNode* frontNode = q.front();
            q.pop();

            int index = LtoR ? i : len - i - 1;
            level[index] = frontNode -> val;
            
            if(frontNode -> left != NULL){
              q.push(frontNode -> left);
            }

            if(frontNode -> right != NULL){
              q.push(frontNode -> right);
            }
         
          }
            //  LtoR = !LtoR;
          ans.push_back(level);
             LtoR = !LtoR;
        }
        return ans;
    }
};
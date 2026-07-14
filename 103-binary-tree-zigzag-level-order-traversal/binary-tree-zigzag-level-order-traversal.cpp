
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>>ans;
        if(!root) return ans;

        queue<TreeNode*>q;
        q.push(root);
         
        bool dir = true;
        while(!q.empty()){
          int len =q.size();
          vector<int>level(len);
          for(int i = 0; i < len; i++){
            TreeNode* frontdata = q.front();
            q.pop();
            int index = dir == true ? i : len - i - 1;
            level[index] = frontdata -> val;

            if(frontdata -> left){
              q.push(frontdata -> left);
            }

            if(frontdata -> right){
              q.push(frontdata -> right);
            }
          }
          dir = !dir;
          ans.push_back(level);
        }
        return ans;
    }
};
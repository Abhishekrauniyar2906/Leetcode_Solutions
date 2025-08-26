

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> ans;

     if(!root) return ans;

     queue<TreeNode*>q;
     q.push(root);

     bool LeftToRight = true;

     while(!q.empty()){
      int levelsize = q.size();
      vector<int>levelAns(levelsize);

      for(int i = 0; i < levelsize; i++){
        TreeNode* front = q.front();
        q.pop();
        int index = LeftToRight ? i : levelsize - i - 1;

        levelAns[index] = front -> val;
        if(front -> left != NULL){
          q.push(front -> left);
        }

        if(front -> right != NULL){
          q.push(front -> right);
        }
       }
       ans.push_back(levelAns);
       LeftToRight = !LeftToRight;
     }
     return ans;
    }
};
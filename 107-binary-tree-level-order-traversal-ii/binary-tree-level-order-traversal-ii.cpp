
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       vector<vector<int>>ans;
       if(!root) return ans;

       queue<TreeNode*>q;
       q.push(root);
       stack<vector<int>>st;

       while(!q.empty()){
        int len = q.size();
          vector<int>levelans;
          for(int i = 0; i < len; i++){
            TreeNode* frontNode = q.front();
            q.pop();
            levelans.push_back(frontNode -> val);
            if(frontNode -> left != NULL){
              q.push(frontNode -> left);
            }
            if(frontNode -> right != NULL){
              q.push(frontNode -> right);
            }
          }
            
          st.push(levelans);
          
         
      
       } 
       
       while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }
       return ans;
    }
};
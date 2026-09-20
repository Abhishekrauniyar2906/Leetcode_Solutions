
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);

        int index = 0;
        bool direction = true;
        while(!q.empty()){
            int len = q.size();
            vector<int>res(len);
            for(int i = 0; i < len; i++){
                TreeNode* front = q.front();
                q.pop();
                index = direction == true ? i : len - i - 1;
                res[index] = front -> val;

                if(front -> left){
                    q.push(front -> left);
                }

                if(front -> right){
                    q.push(front -> right);
                }
            }
            direction = !direction;
            ans.push_back(res);
        }
        return ans;
    }
};
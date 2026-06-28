
class Solution {
public:
vector<TreeNode*>ans;

   string solve(TreeNode* root, unordered_map<string,int>&mp){
    if(!root) return "NULL";
     
     string s = to_string(root -> val) + "," + solve(root -> left,mp) + "," + solve(root -> right, mp) + ",";

     if(mp[s] == 1){
      ans.push_back(root);
      
     }
   
      mp[s]++;
     
     return s;
   }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      unordered_map<string,int>mp;
        solve(root, mp);

        return ans;
    }
};
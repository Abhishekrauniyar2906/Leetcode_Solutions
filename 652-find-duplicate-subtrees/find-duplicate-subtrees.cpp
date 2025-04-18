
class Solution {
public:

    string solve(TreeNode* root, vector<TreeNode*> &result,unordered_map<string,int> &mp){
        if(!root){
            return "N";
        }


        string s = to_string(root -> val) + "," + solve(root -> left, result, mp) + "," + solve(root -> right, result, mp);
        
        if(mp[s] == 1){
            result.push_back(root);
        }

        mp[s]++;

        return s;


    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      unordered_map<string,int>mp;

      vector<TreeNode*> result;

      solve(root, result, mp);
      return result;  
    }
};
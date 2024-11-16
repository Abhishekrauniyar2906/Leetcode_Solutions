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
  
  void BTP(TreeNode* root, string store, vector<string> &paths){
    if(!root){
      return;
    }
    if(!store.empty()){
      store +="->";
    }
    store +=to_string(root -> val);
    
    if(root -> left == NULL && root -> right == NULL){
      paths.push_back(store);
    }
    else{
   BTP(root -> left, store, paths);
      BTP(root -> right, store, paths);
    }
  }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
      
      if(root != NULL){
         BTP(root, "", paths);
      }
      return paths;
    }
};
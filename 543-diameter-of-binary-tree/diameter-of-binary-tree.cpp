
class Solution {
public:
   
    pair<int, int> solve(TreeNode* root){
      if(!root){
        pair<int,int> p = make_pair(0, 0);
        return p;
      }

      auto l = solve(root -> left);
      auto r = solve(root -> right);

      int h = max(l.first , r.first) + 1;
      int temp = l.first + r.first;
      int d = max({l.second, r.second,  temp});

      return {h, d};
    }
    int diameterOfBinaryTree(TreeNode* root) {
       return solve(root).second;
    }
};
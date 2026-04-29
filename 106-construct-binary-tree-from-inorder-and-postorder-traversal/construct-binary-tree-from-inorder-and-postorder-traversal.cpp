class Solution{
public:
    int index = 0;  
    TreeNode* solve(vector<int> &inorder, vector<int> &postorder, int start, int end){
     if(start > end) return NULL;
     int n = inorder.size();
      int val = postorder[n - index - 1];
      index++;
     
      // cout <<"the value is : " << val << endl;
    
      TreeNode* root = new TreeNode(val);

      int pos = start;
      for(int i = start; i <= end; i++){
        if(inorder[i] == val){
            pos = i;
            break;
        }
      }
      
      
      root -> right = solve(inorder, postorder,pos + 1, end);
      root -> left = solve(inorder, postorder,start, pos - 1);
      return root;
    }
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
       return solve(inorder, postorder, 0, inorder.size() - 1);
    }
};

class Solution {
public:
int index = 0;
    
   TreeNode* solve(vector<int> &inorder, vector<int> &postorder, int start, int end){
    if(start > end) return NULL;
    int n = inorder.size();
     int data = postorder[n - index - 1];
     
     index++;
     TreeNode* root = new TreeNode(data);
     int pos = start;
     for(int i = start; i <= end; i++){
         if(inorder[i] == data){
             pos = i;
             break;
         }
     }
     root -> right = solve(inorder, postorder, pos + 1, end);
     root -> left = solve(inorder, postorder, start, pos - 1);
     
     return root;
   }
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
     return solve(inorder, postorder, 0, inorder.size() - 1);
     
    }
  
};
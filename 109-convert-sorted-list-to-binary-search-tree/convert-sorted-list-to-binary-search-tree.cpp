
class Solution {
public:
    
    int length(ListNode* head){
      ListNode* temp = head;
      int count = 0;
      while(temp != NULL){
        count++;
        temp = temp -> next;
      }
      return count;
    }

    TreeNode* bst(ListNode* &head, int len){
      if(len <= 0 || !head) return NULL;

      TreeNode* leftSubTree = bst(head, len / 2);

      TreeNode* root = new TreeNode(head -> val);
      root -> left = leftSubTree;
      head = head -> next;
      
      TreeNode* rightSubTree = bst(head, len - len / 2 - 1);
      root -> right = rightSubTree;

      return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
      int len = length(head);

      return bst(head, len);   
}
};
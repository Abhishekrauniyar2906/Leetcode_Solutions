
class Solution {
public:
    int solve(ListNode* head){
      int c = 0;
      ListNode* temp = head;

      while(temp != NULL){
         c++;
         temp = temp -> next;
      }
      return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head -> next) return NULL;
        int len = solve(head);
        if(len == n) return head -> next;
        int move = len - n;
          ListNode* temp = head;
        for(int i = 1;  i < move; i++){
          temp = temp -> next;
        }

        ListNode* deleteNode = temp -> next;
        temp -> next = deleteNode -> next;
        deleteNode -> next = NULL;
        delete deleteNode;
        return head;
    }
};
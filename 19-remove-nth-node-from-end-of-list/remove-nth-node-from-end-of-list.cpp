
class Solution {
public:
    int length(ListNode* head){
      int count = 0;

      ListNode* temp = head;

      while(temp != NULL){
        count++;
        temp = temp -> next;
      }
      // cout <<"count : " << count << endl;
      return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(head == NULL || head -> next == NULL) return NULL;
      int len = length(head);      
      if(n == len){
        return  head -> next;
      }

      int move = len - n;
      // cout << "the move is: " << move << len <<endl;
      ListNode* temp = head;

      for(int i = 1; i < move; i++){
        temp = temp -> next;
      }

       ListNode* deleteNode = temp -> next;
       temp -> next = deleteNode -> next;
       deleteNode -> next = NULL;
       delete deleteNode;
       return head;
    }
};
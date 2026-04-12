
class Solution {
public:

   int countNode(ListNode* head){
    int c = 0;
    ListNode* temp = head;
    while(temp != NULL){
      c++;
      temp = temp -> next;

    }
    return c;
   }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int len = countNode(head);
      if(n == len){
            return head -> next;
      }
    ListNode* curr = head;
      int move = len - n;
      for(int i = 1; i < move; i++){
        curr = curr -> next;
      }

      ListNode* temp = curr -> next;
      curr -> next = temp -> next;
      delete temp;
      return head;
      
    }


};
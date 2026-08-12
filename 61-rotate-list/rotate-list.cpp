
class Solution {
public:
      int solve(  ListNode*  head){
          ListNode*  temp  = head;
          int count = 0;

          while(temp != NULL){
            count++;
            temp =  temp -> next;
          }
          return count;
      }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head -> next) return head;
        int len = solve(head);
        k = k % len;
        if(k == 0) return head;
        int move = len - k;

          ListNode*  temp = head;

          for(int i = 1; i < move; i++){
            temp = temp -> next;
          }
        //   cout <<"temp -> data" << temp -> val << endl;

          ListNode* newHead = temp -> next;
          ListNode* curr = newHead;

          while(curr -> next != NULL){
            curr = curr -> next;
          }

              curr -> next = head;
              temp -> next = NULL;

              return newHead;
    }
};
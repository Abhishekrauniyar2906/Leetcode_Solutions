class Solution {
public:
  int getLength(ListNode* head){
         ListNode* temp = head;
           int count = 0;
    while(temp != NULL){
        count++;
      temp = temp -> next;
    }
    return count;
  }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
        {
           return head;
        }    
          if(head -> next == NULL){
               return head;
          }
      
          ListNode* prev = NULL;
      ListNode* curr = head;
      ListNode* NextNode = curr -> next;
      int pos = 0;
      
       int len = getLength(head);
      if(len < k){
        return head;
      }
        while(pos < k){
                NextNode = curr -> next;
              curr -> next = prev;
              prev = curr;
              curr = NextNode;
          pos++;
             }
      
                ListNode* remaining_Ans = NULL;
      
               if(NextNode != NULL){
                  remaining_Ans = reverseKGroup(NextNode, k);
                 head -> next = remaining_Ans;
              }
               return prev;
        }
};
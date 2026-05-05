
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
    ListNode* rotateRight(ListNode* head, int k) {
      if(!head || !head -> next || k == 0) return head;
        int n =  length(head);
        k = k % n;
        if(k == 0) return head;
        int move = n - k;
        
        ListNode* temp = head;
        for(int i = 1; i < move; i++){
          temp = temp -> next;
        }
       
        
        ListNode* newHead = temp -> next;
        
        temp -> next = NULL;
        ListNode* joinNode = newHead;
     
        
        while(joinNode -> next != NULL){
          joinNode = joinNode -> next;
        }
   
        joinNode -> next = head;
        return newHead;
    }
};
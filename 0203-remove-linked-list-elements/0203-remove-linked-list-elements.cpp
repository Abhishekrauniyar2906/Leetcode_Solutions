
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       while(head != NULL && head -> val == val){  
            head = head -> next;
        }
      if(!head){
           return head;
      }
        ListNode* prev = head;
        ListNode* curr = head -> next;
      
        while(curr != NULL){
           
           if(curr -> val == val){
               prev -> next = curr -> next;
              delete curr;
             curr = prev -> next;
           }
          
          else{
            prev = prev -> next;
            curr = curr -> next;
          }
        
          
        }
        return head;
    }
};



    
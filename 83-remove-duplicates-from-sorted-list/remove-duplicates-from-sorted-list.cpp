
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       if(!head  || !head -> next) return head;
        ListNode* temp = head;

       

        while(temp != NULL && temp -> next != NULL){
          if(temp -> val == temp -> next -> val){
            ListNode* nextNode = temp -> next;
            temp -> next = nextNode -> next;
            nextNode -> next = NULL;
            delete nextNode; 
          }
        
        else{
          temp = temp -> next;
        }
        }
        return head;
    }
};
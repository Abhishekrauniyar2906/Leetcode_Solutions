
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smaller = new ListNode(-1);
        
        ListNode* greater = new ListNode(-1);

        ListNode* small = smaller;
        ListNode* large = greater;

        ListNode* temp = head;

        while(temp != NULL){
          if(temp -> val < x){
            small -> next = temp;
            small = temp;
            temp = temp -> next;
          }
          else{
            large -> next = temp;
            large = temp;
            temp = temp -> next;
          }
        }
        large -> next = NULL;
        small -> next = greater -> next;
        return smaller -> next;
    }
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      if(!head || !head -> next) return NULL;
        ListNode* slow= head;
        ListNode* fast = head;
        ListNode* prev = slow;

        while(fast != NULL && fast -> next != NULL){
          prev = slow;
          slow = slow -> next;
          fast = fast -> next -> next;
        }
        prev -> next = slow -> next;
        slow -> next = NULL;
        return head;
    }
};
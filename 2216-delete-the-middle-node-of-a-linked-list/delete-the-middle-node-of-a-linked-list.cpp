
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      if(head == NULL || head->next == NULL) {
        return NULL; // delete the only node
    }

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;

    while(fast != NULL && fast->next != NULL){
      prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

      prev -> next = slow -> next;
      delete slow;

    return head;
    }
};
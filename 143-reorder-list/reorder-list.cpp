
class Solution {
public:

    ListNode* middleNode(ListNode* head){
      ListNode* slow = head;
      ListNode* fast = head;

      while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

      }
      return slow;
    }
       ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
          ListNode* nextNode = curr -> next;
          curr -> next = prev;
          prev = curr;
          curr = nextNode;
        }
        return prev;
    }

    ListNode* merge(ListNode* first, ListNode* second){
      while(second != NULL){
       ListNode* firstNext = first -> next;
       ListNode* secondNext = second -> next;
       first -> next = second;
       second -> next = firstNext;
       first = firstNext;
       second = secondNext;

      }
      return first;
    }
    void reorderList(ListNode* head) {
        if(!head || !head -> next) return;
        ListNode* middle = middleNode(head);
        ListNode* revList = reverseList(middle -> next);
        middle -> next = NULL;
      
        merge(head, revList);
    }
};
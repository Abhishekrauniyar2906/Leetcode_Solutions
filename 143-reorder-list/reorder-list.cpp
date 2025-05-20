
class Solution {
public:
   ListNode* middleNode(ListNode* &head){
    ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
   }

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    void merge(ListNode* l1, ListNode* l2) {
    while (l1 && l2) {
        ListNode* l1Next = l1->next;
        ListNode* l2Next = l2->next;

        l1->next = l2;         // link l1 to l2
        if (l1Next == nullptr) break;
        l2->next = l1Next;     // link l2 to next l1

        l1 = l1Next;
        l2 = l2Next;
    }
}

    void reorderList(ListNode* head) {
        if(head == 0 || head -> next == 0){
            return;
      }
         ListNode* midNode = middleNode(head);
         
            
         ListNode* second = reverse(midNode -> next);
          midNode -> next = NULL;

          

          merge(head, second);
         
    }
};
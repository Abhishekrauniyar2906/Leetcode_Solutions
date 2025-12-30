
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        ListNode* dummy = ans;

        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry != 0){
          int x = (l1 != NULL ) ? l1 -> val : 0;
          int y = (l2 != NULL) ?  l2 -> val : 0;

          int sum = x + y + carry;
          carry = sum / 10;
          dummy -> next = new ListNode(sum % 10);
          dummy = dummy -> next;

          if(l1 != NULL){
            l1 = l1 -> next;
          }

          if(l2 != NULL){
            l2 = l2 -> next;
          }

          if(carry > 0){
            dummy -> next = new ListNode(carry);
          }

        }
        return ans -> next;
    }
};
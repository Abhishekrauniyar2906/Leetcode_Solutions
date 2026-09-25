
class Solution {
public:
    int len(ListNode* head){
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL){
            c++;
            temp = temp -> next;
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head -> next) return head;
        int l = len(head);
        if(k > l) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;

        while(pos < k && curr != NULL){
            ListNode* nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
            pos++;
        }
        head -> next = reverseKGroup(curr, k);
        return prev;
    }
};
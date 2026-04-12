
class Solution {
public:
     ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
           ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        
        if(!head1) return head2;
        if(!head2) return head1;
        
        while(head1 && head2){
            if(head1 -> val <= head2 -> val){
                ans -> next = head1;
                ans = head1;
                head1 = head1 -> next;
            }
            else{
                ans -> next = head2;
                ans = head2;
                head2 = head2 -> next;
            }
        }
        
        if(head1){
            ans -> next = head1;
        }
        
        if(head2){
            ans -> next = head2;
        }
        return dummy -> next;
    }
};
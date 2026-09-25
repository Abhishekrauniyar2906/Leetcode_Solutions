
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head -> next ) return head;
        int l = len(head);
        k = k % l;
        if(k == 0) return head;
        
        int move = l - k;
        // cout << move << endl;
        ListNode* temp = head;
        for(int i = 1; i < move; i++){
            temp = temp -> next;
        }
        ListNode* newhead = temp -> next;
        temp -> next = NULL;
        // cout << newhead -> val << endl;
        ListNode* t = newhead;

        while(t -> next != NULL){
            t = t -> next;
        }
        t -> next = head;
        // cout << t -> val << endl;
        return newhead;
    }
};
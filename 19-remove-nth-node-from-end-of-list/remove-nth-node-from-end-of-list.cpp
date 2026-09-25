
class Solution {
public:

    int leng(ListNode* head){
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL){
            c++;
            temp = temp -> next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head -> next) return NULL;
        int len = leng(head);
        if(len == n) return head -> next;
        
        int move = len - n;
        ListNode* temp = head;
        for(int i = 1; i < move; i++){
            temp = temp -> next;
        }
        ListNode* deleteNode = temp -> next;
        temp -> next = deleteNode -> next;
        temp = temp -> next;
        deleteNode -> next = NULL;
       delete deleteNode;
       return head;
    }
};
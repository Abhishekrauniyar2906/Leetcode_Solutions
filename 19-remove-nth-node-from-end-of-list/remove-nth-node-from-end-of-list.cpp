
class Solution {
public:
    int length(ListNode* head){
        int c = 0;
        ListNode* temp = head;
        while(temp != NULL){
            c++;
            temp = temp -> next;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     int len = length(head);
     if(!head && !head -> next) return head;
     if(len == n) return head -> next;
       int move = len - n;

       ListNode* temp = head;
       for(int i = 1; i < move; i++){
        temp = temp -> next;
       }
       ListNode* deleteNode = temp -> next;
       temp -> next = deleteNode -> next;
       deleteNode -> next = NULL;
       delete deleteNode;
       return head;

    }
};
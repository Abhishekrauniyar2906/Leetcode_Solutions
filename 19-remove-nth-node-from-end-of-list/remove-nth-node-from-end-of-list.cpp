/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

        int move = len - n;

        if(n == len){
          return head -> next;
        }
         ListNode* curr = head;
        for(int i = 1; i < move; i++){
          curr = curr -> next;
        }

        ListNode* temp = curr -> next;
        curr -> next = temp -> next;
        
        delete temp;

        return head;
    }
};
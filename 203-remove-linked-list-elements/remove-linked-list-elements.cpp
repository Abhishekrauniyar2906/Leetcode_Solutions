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
    ListNode* removeElements(ListNode* head, int data) {
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;

        ListNode* temp = head;

        while(temp != NULL){
          if(temp -> val != data){
             ans -> next = temp;
             ans = temp;
          }
          temp = temp -> next;
        }
        ans -> next = NULL;
        return dummy -> next;
    }
};
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
    ListNode* reverse(ListNode* &prev, ListNode* &curr){
        if(curr == NULL){
            return prev;
        }
        ListNode* NextNode = curr -> next;
        curr -> next = prev;
      return reverse(curr, NextNode);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
       
        // while(curr != NULL){
        //   ListNode* NewNode = curr -> next;
        //    curr -> next = prev;
        //     prev = curr;
        //     curr = NewNode;
            return reverse(prev, curr);
}
        
};
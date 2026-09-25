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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head -> next) return head;
        ListNode* first = head;
        ListNode* second = head -> next;
            ListNode* joinNode = second;
        while(second != NULL && second -> next != NULL){
                first -> next = second -> next;
                first = first -> next;
                second -> next = first -> next;
                second = second -> next;
        }
        first -> next = joinNode;
        return head;
    }
};
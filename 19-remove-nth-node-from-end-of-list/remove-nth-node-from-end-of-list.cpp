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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy = new ListNode(0);  // Dummy node to simplify edge cases
        dummy->next = head;
        
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move `first` n+1 steps ahead to create the necessary gap
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }
        
        // Move both `first` and `second` until `first` reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        
        // Remove the nth node from the end
        second->next = second->next->next;
        
        return dummy->next;  
    }
};
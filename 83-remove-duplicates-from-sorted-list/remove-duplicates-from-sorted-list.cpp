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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head -> next == NULL){
              return head;
        }
       ListNode* temp = head;
      
          while(temp != NULL && temp -> next != NULL){
                // remove
                if (temp->val == temp->next->val){
             ListNode* nextNode = temp -> next;
             temp -> next = nextNode -> next;
             nextNode -> next = NULL;
             delete nextNode;
           }
          else{
            temp = temp -> next;
            }
          
            }
       return head;
           
    }
};
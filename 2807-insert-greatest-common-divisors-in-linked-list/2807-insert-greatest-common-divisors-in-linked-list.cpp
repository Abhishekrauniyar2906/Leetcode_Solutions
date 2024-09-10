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
    int GCD(int a, int b)
    {
        if(a == 0)\
        {
            return a;
        }
        if(b == 0)
        {
            return b;
        }
        if(a == b){
            return a;
        }
        
        if(a > b){
            return gcd(a-b,b);
        }
        return gcd(a,a-b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        if(head == NULL && head -> next == NULL)
        {
            return NULL;
        }
        ListNode* prev = head;
        ListNode* temp = prev -> next;
        while(temp)
        {
            int data = gcd(prev -> val, temp -> val);
            
         ListNode* d = new ListNode(data); 
            ListNode* nxt = temp -> next;
            prev -> next = d;
            d -> next = temp;
            prev = temp;
            
            temp = nxt;
        }
        return head;
    }
};
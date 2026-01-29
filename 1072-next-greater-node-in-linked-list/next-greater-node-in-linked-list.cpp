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
    
    vector<int> solve(ListNode* head){
      vector<int>ans;
      ListNode* curr = head;

      while(curr != NULL){
        ans.push_back(curr -> val);
        curr = curr -> next;
      }
      return ans;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans = solve(head);
        vector<int>result;
        stack<int>st;
        st.push(0);

        for(int i = ans.size() - 1; i >= 0; i--){
           int ele = ans[i];

           while(st.top() != 0 && st.top() <= ele){
               st.pop();
           }
           
           result.push_back(st.top());
           st.push(ele);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
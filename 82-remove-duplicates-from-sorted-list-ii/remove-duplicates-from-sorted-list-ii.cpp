
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>mp;

       ListNode* temp = head;

       while(temp != NULL){
        mp[temp -> val]++;
        temp = temp -> next;
       }

         ListNode* dummy = new ListNode(-1);
         ListNode* ans = dummy;

          temp = head;
          while(temp != NULL){
            if(mp[temp -> val] <= 1){
                ans -> next = temp;
                ans = temp;
            }
            temp = temp -> next;
          }
          ans -> next = NULL;
          return dummy -> next;
    }
};
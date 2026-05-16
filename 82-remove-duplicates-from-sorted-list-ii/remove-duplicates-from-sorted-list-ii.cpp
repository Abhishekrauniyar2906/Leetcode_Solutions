
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      if(!head || !head -> next) return head;
        unordered_map<int,int>mp;

        ListNode* temp = head;

        while(temp != NULL){
          mp[temp -> val]++;
          temp = temp -> next;
        }

        // for(auto x : mp){
        //   cout << x.first << " -> " << x.second << endl;
        // }

        temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        while(temp != NULL ){
          // cout <<temp -> val << endl;
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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
    
    
        ListNode* result = new ListNode(-1);
        ListNode* ans = result;
        
      if(left == 0){
       return right;
      }
      
      if(right == 0){
              return left;
      }
      
      
      while(left && right){
             if(left -> val <= right -> val){
                ans -> next = left;
               ans = left;
               left =left -> next;
             }
        else{
                      ans -> next = right;
                      ans = right;
                       right = right -> next;
          
        }
      }
        if(left){
                 ans -> next = left;
        }
        
        if(right){
               ans -> next = right;
         }
      
      
      return result -> next;
    }
};
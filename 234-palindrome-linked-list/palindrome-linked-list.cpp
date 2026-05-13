
class Solution {
public:

    ListNode* middle(ListNode* head){
      ListNode* fast = head;
      ListNode* slow = head;

      while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
      }
      return slow;
    }

    ListNode* reverseNode(ListNode* head){
       ListNode* prev = NULL;
       ListNode* curr = head;
       while(curr != NULL){
        ListNode* newNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = newNode;
       }
       return prev;
    }

    bool CompareList(ListNode* head1, ListNode* head2){
       
       while(head2 != NULL){
        if(head1 -> val != head2 -> val){
          return false;
        }
        else{
          head1 = head1 -> next;
          head2 = head2 -> next;
        }
       }
       return true;
    }
   
    bool isPalindrome(ListNode* head) {
      if(!head || !head -> next) return true;
    
   
     ListNode* mid = middle(head);
     
  
     ListNode* rev = reverseNode(mid);   
      bool ans = CompareList(head, rev);  
     
      
      return ans;
    }
};
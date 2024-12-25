

class Solution {
public:
  
  ListNode* Middle(ListNode* head){
      
   ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast != NULL && fast -> next != NULL){
           slow = slow -> next;
      fast = fast -> next -> next;
  
     }
    
    return slow;
    
  }
  
  ListNode* reverse(ListNode* head2){
         ListNode* prev = NULL;
         ListNode* curr = head2;
          
    while(curr != NULL){
     ListNode* nextNode = curr -> next;
       curr -> next = prev;
      prev = curr;
      curr = nextNode;
    }
    
    return prev;
  }
  
  
  bool compareList(ListNode* head, ListNode* head2){
  
    
    while(head2!= NULL){
      if(head -> val != head2 -> val)
      {
               return false;
      }
      else{
        head = head -> next;
      head2 = head2 -> next;
      }
    }
     
    return true;
    
  }
    bool isPalindrome(ListNode* head) {
        
      if (head == NULL || head->next == NULL) return true;
      ListNode* midNode = Middle(head);
      
      ListNode* head2 = reverse(midNode);
     
      
//       compare two halves
      
      bool result = compareList(head, head2);
      
        reverse(head2);
      
      return result;
    

        
    }
};
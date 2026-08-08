
class Solution {
public:
   class Compare{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a -> val > b -> val;
    }
   };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for(auto list : lists){
            if(list){
                pq.push(list);
            }
        }
         ListNode* dummy = new ListNode(-1);
         ListNode* ans = dummy;
        while(!pq.empty()){
           ListNode* topNode = pq.top();
           pq.pop();

           ans -> next = topNode;
           ans = ans -> next;
          

           if(topNode -> next != NULL){
            pq.push(topNode -> next);
           }

        }
        return dummy -> next;
    }
};
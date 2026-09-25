
class Solution {
public:
   
    struct Compare{
        bool operator()(ListNode* a, ListNode* b){
            return a -> val > b -> val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     priority_queue<ListNode*, vector<ListNode*>, Compare>minHeap;

     for(auto list : lists){
        if(list){
            minHeap.push(list);
        }
     }
      ListNode* dummyNode = new ListNode(-1);
      ListNode* ans = dummyNode;
     while(!minHeap.empty()){
        ListNode* topNode = minHeap.top();
        minHeap.pop();

        ans -> next = topNode;
        ans = ans -> next;
        if(topNode -> next != NULL)
        minHeap.push(topNode -> next);
     
      
     }
     return dummyNode -> next;
    }
};
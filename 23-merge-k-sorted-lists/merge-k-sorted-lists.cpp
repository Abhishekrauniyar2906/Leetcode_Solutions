// class Solution {
// public:

// // Either use struct (default public) or make the class public inside Solution
// struct compare {
//     bool operator()(ListNode* a, ListNode* b) {
//         return a->val > b->val; // Min-heap: smallest value at top
//     }
// };

// ListNode* mergeKLists(vector<ListNode*>& lists) {
//     // Min heap to store the smallest current head among all lists
//     priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

//     // Step 1: Push the head of each non-empty list into the heap
//     for (auto list : lists) {
//         if (list) {
//             minHeap.push(list);
//         }
//     }

//     // Step 2: Dummy node to build the result list
//     ListNode* dummy = new ListNode(0);
//     ListNode* tail = dummy;

//     // Step 3: Build the result list by extracting min and pushing next nodes
//     while (!minHeap.empty()) {
//         ListNode* node = minHeap.top();
//         minHeap.pop();

//         tail->next = node;
//         tail = tail->next;

//         if (node->next) {
//             minHeap.push(node->next);
//         }
//     }

//     return dummy->next;
// }

// };


struct Compare{
     bool operator()(ListNode* a, ListNode* b){
         return a -> val > b -> val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;


        for(auto list : lists){
           if(list){
            pq.push(list);
           }
        }
        
            
            ListNode* dummy = new ListNode(-1);
            ListNode* tail = dummy;

        while(!pq.empty()){
            ListNode* node = pq.top();
              pq.pop();

              tail -> next = node;
              tail = tail -> next;

              if(tail -> next){
                pq.push(node -> next);
              }
         

        }

        return dummy -> next;
    }
};
































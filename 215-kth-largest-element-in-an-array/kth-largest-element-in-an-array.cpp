class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int>maxHeap;

       for(auto num : nums){
        maxHeap.push(num);
       } 
       int ans = -1;
       while(!maxHeap.empty() && k--){
        int top = maxHeap.top();
        maxHeap.pop();

        ans = top;
       }
       return ans;
    }
};
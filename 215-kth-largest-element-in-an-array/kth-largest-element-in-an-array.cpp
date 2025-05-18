class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;

        for(auto num : nums){
            pq.push(num);
        }
            int ans = 0;
        while(!pq.empty() && k--){
            int temp = pq.top();
            pq.pop();
            ans = temp;
        }
        return ans;
    }
};
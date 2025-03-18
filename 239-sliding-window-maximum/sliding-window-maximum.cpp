class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;

        //1. Procees first window

        for(int i = 0; i < k; i++){
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        ans.push_back(nums[dq.front()]);

        // process remaining window
        for(int i = k; i < nums.size(); i++){
            // removal -> out of range
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            // addition;
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        
        return ans;
    }
};
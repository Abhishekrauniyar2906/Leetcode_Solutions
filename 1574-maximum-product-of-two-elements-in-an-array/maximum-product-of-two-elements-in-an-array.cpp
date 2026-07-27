class Solution {
public:
    int maxProduct(vector<int>& nums) {
      if(nums.size() == 1) return 0;
      if(nums.size() == 2) return (nums[0] - 1) * (nums[1] - 1);
        priority_queue<int>pq;

        for(auto it : nums){
          pq.push(it);
        }

         int first = pq.top();
         pq.pop();
         int second = pq.top();
         pq.pop();

         int ans = (first - 1) * (second - 1);
           return ans;
    } 
};
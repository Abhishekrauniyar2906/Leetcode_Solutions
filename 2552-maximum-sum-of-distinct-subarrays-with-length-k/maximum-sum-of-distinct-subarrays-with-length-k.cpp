class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       long long sum = 0;
       long long maxSum = 0;
       
       int left = 0;
       for(int right = 0; right < nums.size(); right++){
        mp[nums[right]]++;
        sum += nums[right];
       


       while(mp[nums[right]] > 1){
        sum -= nums[left];
        mp[nums[left]]--;
        left++;
        }
         
        if(right - left + 1 == k){
            maxSum = max(maxSum, sum);
            sum -= nums[left];
            mp[nums[left]]--;
            left++;
        }
       }
        return maxSum;
    }
};
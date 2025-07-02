class Solution {
public:
    
    int robber(vector<int> &nums, vector<int> &dp, int i){
      int n = nums.size();
      if(n == 0) return 0;
      if(n == 1) return nums[0];

      dp[0] = nums[0];
      dp[1] = max(nums[0], nums[1]);

      for(int i = 2; i < n; i++){
        int rob = nums[i] + dp[i - 2];
        int skip = dp[i - 1];

        dp[i] = max(rob, skip);
      }

      return dp[n - 1]; // max store in the last house
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        int ans = robber(nums, dp, 0);
        return ans;
    }
};
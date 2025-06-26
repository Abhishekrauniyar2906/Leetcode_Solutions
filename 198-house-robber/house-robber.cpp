class Solution {
public:
   int house(vector<int>& nums, int i, vector<int> &dp){
    if(i >= nums.size()){
      return 0;
    }
     
     if(dp[i] != -1){
      return dp[i];
     }

     int rob = nums[i] + house(nums, i + 2, dp);
     int skip = house(nums, i + 1, dp);

     return dp[i] = max(rob, skip);

   }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, -1);
        // 0 is a index 
        return house(nums, 0, dp);
    }
};
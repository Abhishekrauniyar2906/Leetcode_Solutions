class Solution {
public:
    
    bool solve(vector<int> &nums, int sum, vector<vector<int>> &dp){
      for(int i = 0; i <= nums.size(); i++){
        for(int j = 0; j <= sum; j++){
          if(j == 0){
            dp[i][j] = true;
          }
          else if(i == 0) {
            dp[i][j] = false;
          }

          else if(nums[i - 1] <= j){
            dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
          }
          else{
            dp[i][j] = dp[i - 1][j];
          }
        }
      }
      return dp[nums.size()][sum];
    }
    bool subsetSum(vector<int> &nums, int sum){
      vector<vector<int>> dp(nums.size() + 1, vector<int>(sum + 1));
      return solve(nums, sum, dp);
    }
    bool canPartition(vector<int>& nums) {
        long long sum = accumulate(nums.begin(), nums.end(), 0);
         
        if(sum % 2 != 0) return false;

        return subsetSum(nums,  sum /2);
               
    }
};
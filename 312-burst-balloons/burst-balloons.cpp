class Solution {
public:
    int solve(vector<int>& nums, int i, int j, vector<vector<int>> &dp){
      if(i + 1 == j) return 0;
      if(dp[i][j] != -1) return dp[i][j];
      int maxi = INT_MIN;
      for(int k = i + 1; k < j; k++){
       int tempAns = solve(nums, i, k, dp) + solve(nums, k, j, dp) + nums[i] * nums[k] * nums[j];
        maxi = max(maxi,tempAns);
       dp[i][j] = maxi;
      }
      return dp[i][j];
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();

        vector<vector<int>>dp(n + 1, vector<int>(n + 1, -1));
        return solve(nums, 0, n - 1, dp);
    }
};
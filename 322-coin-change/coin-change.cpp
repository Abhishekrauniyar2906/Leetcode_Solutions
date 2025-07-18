class Solution {
public:

    int minAns(vector<int> &coins, int  amount, vector<int> &dp){
      if(amount == 0) return 0;
      if(amount < 0) return INT_MAX;

      if(dp[amount] != -1) return dp[amount];
        
        int mini = INT_MAX;
      for(auto coin : coins){
        int result = minAns(coins, amount - coin, dp);

        if(result != INT_MAX){
          mini = min(mini, result + 1);
        }
      }
      dp[amount] = mini;
      return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount + 1, -1);
        int ans = minAns(coins, amount, dp);
        return ans == INT_MAX ? -1 : ans;
    }
};
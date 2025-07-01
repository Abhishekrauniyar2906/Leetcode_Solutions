class Solution {
public:
    int solveUsingTopDown(int n, vector<int> &dp){
     if(n == 0 || n == 1){
      return n;
     }
      // return the ans which is the valid answer not exists
      if(dp[n] != -1){
        return dp[n];
      }
     // store the ans in dp
     dp[n] = solveUsingTopDown(n - 1, dp) + solveUsingTopDown(n - 2, dp);
     return dp[n];
    }
    int fib(int n) {
        // using top down
        vector<int>dp(n + 1, -1);
        int ans = solveUsingTopDown(n, dp);
        return ans;
    }
};
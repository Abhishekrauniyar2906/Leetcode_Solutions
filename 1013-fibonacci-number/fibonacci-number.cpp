class Solution {
public:
    int solveUsingTopDown(int n, vector<int> &dp){
      
     dp[0] = 0;
     if(n == 0){
        return 0;
      }
      if(n == 1) return 1;
     dp[1] = 1;
      // return the ans which is the valid answer not exists
      
     // store the ans in dp
     for(int i = 2; i <= n; i++){
     dp[i] = dp[i-1] + dp[i - 2];
     }
     return dp[n];
    }
    int fib(int n) {
        // using top down
        vector<int>dp(n + 1, -1);
        int ans = solveUsingTopDown(n, dp);
        return ans;
    }
};
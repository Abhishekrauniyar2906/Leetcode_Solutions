class Solution {
public:
    
    int solve(int n, int i , int j, vector<vector<int>> &dp){
       if(i >= j) return 0;

        if(dp[i][j] != - 1) return dp[i][j];
          
          int mini = INT_MAX;
        for(int k = i; k <=
         j; k++){

          int res = max(solve(n, i, k - 1, dp), solve(n, k + 1, j, dp));
            
            int tempAns = k + res;
          mini = min(mini, tempAns);
          
        }
        dp[i][j] = mini;
        return dp[i][j];
    }
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n + 1, vector<int>(n + 1, -1));
        return solve(n, 1, n, dp);
    }
};
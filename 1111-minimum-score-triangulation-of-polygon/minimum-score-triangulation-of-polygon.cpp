class Solution {
public:
    
    int solve(int i, int j, vector<int> &values, vector<vector<int>> &dp){
      if(j - i < 2) return 0;

       if(dp[i][j] != -1) return dp[i][j];
       
       int mini = INT_MAX;
       for(int k = i + 1; k < j; k++){
        int tempAns = solve(i, k, values, dp) + solve(k, j, values, dp) + values[i] * values[k] * values[j];
        mini = min(mini, tempAns);
        dp[i][j] = mini;
       }

       return dp[i][j];
       
    }
    int minScoreTriangulation(vector<int>& values) {
      int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, values.size() - 1, values, dp);
    }
};
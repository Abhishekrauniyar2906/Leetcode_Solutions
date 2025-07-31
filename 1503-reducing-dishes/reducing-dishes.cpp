class Solution {
public:
    
    int solve(vector<int>& satisfaction, int index, int time, vector<vector<int>>&dp){
       int n = satisfaction.size();
      if(index == n){
        return 0;
      }

      if(dp[index][time] != -1) return dp[index][time];
     
     
        int include = satisfaction[index] * time + solve(satisfaction, index + 1, time + 1, dp);
        int exclude = solve(satisfaction, index + 1, time, dp);
        dp[index][time] = max(include, exclude);
     
      return dp[index][time];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>>dp(n + 1, vector<int>(n + 1, -1));
        return solve(satisfaction,0, 1, dp);
    }
};
class Solution {
public:

    int solve(vector<int> &cuts, int i, int j, vector<vector<int>> &dp){
     if(i + 1== j) return 0;
      int mini = INT_MAX;
      if(dp[i][j] != -1) return dp[i][j];

      for(int k = i + 1; k < j; k++){
         int tempAns = cuts[j] - cuts[i] + solve(cuts, i, k, dp) + solve(cuts, k, j, dp);
         mini = min(mini, tempAns);
         dp[i][j] = mini;
      }
      return dp[i][j];
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        vector<vector<int>>dp(cuts.size(), vector<int>(cuts.size(), -1));
        return solve(cuts, 0, cuts.size() - 1, dp);
    }
};
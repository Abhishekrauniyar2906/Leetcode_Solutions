class Solution {
public:
    vector<int>dp;
    int solve(vector<int>& days, vector<int>& costs){
     
      int n = days.size();
      dp[n] = 0; 

      for(int k = n - 1; k >= 0; k--){
      // 1 day pass   
      int option1 = costs[0] + dp[k + 1];

      // 7day pass
      int i;
      for(i = k; i < days.size() && days[i] < days[k] + 7; i++);

      int option2 = costs[1] + dp[i];

       for(i = k; i < days.size() && days[i] < days[k] + 30; i++);
      int option3 = costs[2] + dp[i];

      dp[k] = min(option1, min(option2, option3));
    }
            return dp[0];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.resize(days.size() + 1, INT_MAX);
        
        return solve(days, costs);

    }
};
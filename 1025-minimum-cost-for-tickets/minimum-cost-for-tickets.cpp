class Solution {
public:
    vector<int>dp;
    int solve(vector<int>& days, vector<int>& costs, int index){
      if(index >= days.size()){
        return 0;
      }
     
      if(dp[index] != -1) return dp[index];

      // 1 day pass   
      int option1 = costs[0] + solve(days, costs, index + 1);

      // 7day pass
      int i;
      for(i = index; i < days.size() && days[i] < days[index] + 7; i++);

      int option2 = costs[1] + solve(days, costs, i);

       for(i = index; i < days.size() && days[i] < days[index] + 30; i++);
      int option3 = costs[2] + solve(days, costs, i); 

      return dp[index] = min(option1, min(option2, option3));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.resize(days.size(), -1);
        return solve(days, costs, 0);

    }
};
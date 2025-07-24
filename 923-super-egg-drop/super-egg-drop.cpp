class Solution {
public:
    int solve(int e, int f, vector<vector<int>> &dp){
      if(f == 0 || f == 1) return f;
         if(e == 1) return f;
          
          if(dp[e][f] != -1) return dp[e][f];
         int mini = INT_MAX;
         int low = 1, high = f;

          while(low <= high){
            int mid = low + (high - low) / 2;
          int Break = solve(e - 1, mid - 1, dp);
          int notBreak = solve(e, f - mid, dp);
           int temp = 1 + max(Break, notBreak);

           if(Break > notBreak){
            high = mid - 1;
            mini = min(mini, temp);
           }

           else{
            low = mid + 1;
            mini = min(mini, temp);
           }
         
        }
        return dp[e][f] = mini;
    }

    int superEggDrop(int e, int f) {
      vector<vector<int>> dp(e + 1, vector<int>(f + 1, -1));
      return solve(e, f, dp);  

    }
};
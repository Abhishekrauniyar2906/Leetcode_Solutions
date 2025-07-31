class Solution {
public:
    
    vector<unsigned int>dp;

    int solve(vector<int>& nums, int target){
      
     
      dp[0] = 1; 
       
     
       int ans = 0;
      for(int i = 1; i <= target; i++){
        for(int j = 0; j < nums.size(); j++){
          if(i - nums[j] >= 0){
        dp[i] += dp[i - nums[j]];
          }
      }
      }
      return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
      
        dp.resize(target + 1, 0);
        return solve(nums, target);
    }
};
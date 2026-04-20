class Solution {
public:

   int maxSum(vector<int>&nums){
      int n = nums.size();
      int sum = 0;
      int maxi = INT_MIN;
    
      for(int i = 0; i < n; i++){
        sum += nums[i];
        maxi = max(maxi, sum);
        // mini = min(mini, sum);
        if(sum < 0){
          sum = 0;
        }
      }
      
      return maxi;
    }

      int minSum(vector<int>&nums){
      int n = nums.size();
      int sum = 0;
      // int maxi = INT_MIN;
      int mini = INT_MAX;
      for(int i = 0; i < n; i++){
        sum += nums[i];
        // maxi = max(maxi, sum);
        mini = min(mini, sum);
        if(sum > 0){
          sum = 0;
        }
      }
      
      return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int LinearSum = maxSum(nums);
        int minSubarraySum = minSum(nums);
        if(LinearSum < 0) return LinearSum;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        
        int circularSubarraySum = totalSum - minSubarraySum;

        return max(LinearSum, circularSubarraySum);
        

 

    }
};
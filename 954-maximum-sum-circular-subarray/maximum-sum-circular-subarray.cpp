class Solution {
public:

    int maxSubarrSum(vector<int>&nums){
      int n = nums.size();
      int sum = 0;
      int maxi = INT_MIN;

      for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0){
          sum = 0;
        }
      }
      return maxi;
    }


      int minSubarrSum(vector<int>&nums){
      int n = nums.size();
      int sum = 0;
      int mini = INT_MAX;

      for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        mini = min(mini, sum);
        if(sum > 0){
          sum = 0;
        }
      }
      return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
      int totalSum = accumulate(nums.begin(), nums.end(), 0);

      int linearSum = maxSubarrSum(nums);
       if(linearSum < 0) return linearSum;
      // cout <<"the linearSum is : " << linearSum << endl;
      int mini = minSubarrSum(nums);
      // cout <<"the min sum is : " << mini << endl;
      int circular = totalSum - mini;

      // cout <<"the circular Sum is : " << circular << endl;

      return max(linearSum, circular);
    }
};
class Solution {
public:
     double slidingwindow(vector<int>& nums, int k){
          // int maxSum = INT_MIN;
         int i = 0;
         int j = k - 1;
         int sum = 0;
         int maxSum = 0;
      
         for(int y = i; y <= j; ++y)
            sum = sum + nums[y];
             maxSum = sum;
             j++;
         
           
         while(j < nums.size()){
          sum = sum - nums[i++];
             sum = sum + nums[j++];
        maxSum = max(maxSum, sum);
             
         }
         double maxAvg = maxSum / (double)k;
         return maxAvg;
     }
    
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingwindow(nums,k);
    }
};
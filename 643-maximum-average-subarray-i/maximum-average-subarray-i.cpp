class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        

        int windowSum = 0;

        for(int i = 0; i < k; i++){
          windowSum += nums[i];
        }

        double maxAvg = (double)windowSum / k;    
        // cout <<"the maxAvg is First : " << maxAvg << endl;

        for(int i = k; i < nums.size(); i++){
          windowSum = windowSum - nums[i - k] + nums[i];
          // cout <<"the windowSum is : " << windowSum << endl;
          double currentSum = (double)windowSum / k;
          // cout <<"the windoeSum Is after divide by k : " << windowSum << endl;
          maxAvg = max(maxAvg, currentSum);
          // cout <<"the maxAvg is : " << maxAvg << endl;
        }
        return (double)maxAvg;;
    }
};
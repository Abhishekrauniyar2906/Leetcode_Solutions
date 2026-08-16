class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;
        for(auto num : nums){
            sum += num;

            maxi = max(maxi, sum);
            sum = sum < 0 ? 0 : sum;
        }
        return maxi == INT_MIN ? 0 : maxi;
    }
};
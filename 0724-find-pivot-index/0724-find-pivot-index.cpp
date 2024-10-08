class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int left_sum = 0;
     int total_sum = 0;
        
        for(auto num:nums){
            total_sum += num;
        }
        for(int i = 0; i < nums.size(); i++){
            if(left_sum == total_sum - left_sum - nums[i]){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};
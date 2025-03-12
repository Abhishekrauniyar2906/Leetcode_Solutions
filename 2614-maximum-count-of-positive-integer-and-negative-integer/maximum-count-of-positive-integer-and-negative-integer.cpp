class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count = 0;
        int count_1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                count++;
            }
            }
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > 0){
                    count_1++;
                }
            }
        

        return max(count, count_1);
    }
};
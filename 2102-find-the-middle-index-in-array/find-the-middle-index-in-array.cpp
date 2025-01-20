class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>left_arr(nums.size(), 0);
        vector<int>right_arr(nums.size() , 0);

        for(int i = 1; i < nums.size(); i++){
            left_arr[i] = left_arr[i - 1] + nums[i - 1]; 
        }

        for(int i = nums.size() - 2; i >= 0; i--){
            right_arr[i] = right_arr[i + 1] + nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++){
            if(left_arr[i] == right_arr[i]){
                return i;
            }
        }

        return -1;
    }
};
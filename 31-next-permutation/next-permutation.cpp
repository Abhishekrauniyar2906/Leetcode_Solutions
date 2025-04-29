class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int circle_index = -1;

        for(int i = n - 1; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                circle_index = i - 1;
                break;
            }
        }
            if(circle_index == -1){
                reverse(nums.begin(), nums.end());
                return;
            }
        
         for(int j = n - 1; j > circle_index; j--){
            if(nums[j] > nums[circle_index]){
                swap(nums[j], nums[circle_index]);
                    break;
                }
            }
             
             reverse(nums.begin() + circle_index + 1, nums.end());
    }
};
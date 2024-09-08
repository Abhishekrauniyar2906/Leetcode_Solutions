class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i < n-1 ; i++){
            for(int j = i + 1; j < n; j++){
                 int diff = nums[i] + nums[j];
                 if(diff == k){
                    return{i,j};
                 }
                }
            }
            return{};
        
    }
};
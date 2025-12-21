class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>ans(nums.size());

      int left = 1;
      int right = 1;

      for(int i = 0; i < nums.size(); i++){
        ans[i] = left;
        left = left * nums[i];
      }

      for(int j = nums.size() - 1; j >= 0; j--){
        ans[j] = ans[j] * right;
        right = right * nums[j];
      }
    

    return ans;
    }
};
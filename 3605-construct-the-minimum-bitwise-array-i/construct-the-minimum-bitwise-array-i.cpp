class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>ans(n, -1);

        for(int i = 0; i < nums.size(); i++){
          int x = 0;
          while(x <= nums[i]){
            if((x | x + 1) == nums[i]){
              ans[i] = x;
              break;
            }
            x++;
          }
        }
        return ans;
    }
};
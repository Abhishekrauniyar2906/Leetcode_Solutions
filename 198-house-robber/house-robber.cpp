class Solution {
public:

int robber(vector<int> &nums){
  int n = nums.size();
   if(n == 0) return 0;

   if(n == 1) return nums[0];

   int prev = nums[0];
   int curr = max(nums[0], nums[1]);
   

  

   for(int i = 2; i < n; i++){
    int rob = prev + nums[i];
    int skip = curr;
    int ans = max(rob, skip);
    prev = curr;
    curr = ans;
   }
   return curr;
  }
    int rob(vector<int>& nums) {
        return robber(nums);

    }
};
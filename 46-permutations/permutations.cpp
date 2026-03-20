class Solution {
public:

 void solve(vector<int>&nums, vector<vector<int>> &ans, vector<int>&level, int index){
     if(index == nums.size()){
      ans.push_back(level);
      return;
     }

     for(int j = index; j < nums.size(); j++){
      swap(nums[index], nums[j]);
      level.push_back(nums[index]);
      solve(nums, ans, level, index + 1);
      level.pop_back();
      swap(nums[index], nums[j]);
     }
 }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
        vector<int>level;
      solve(nums, ans, level, 0);
      return ans;
    }
};
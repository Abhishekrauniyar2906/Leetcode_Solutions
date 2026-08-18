class Solution {
public:

    void solve(vector<int>& nums, int index, vector<vector<int>> &ans, vector<int>out){
       if(index == nums.size()){
         ans.push_back(out);
       }

       for(int i = index; i < nums.size(); i++){
          swap(nums[i], nums[index]);
          out.push_back(nums[index]);
          solve(nums, index + 1, ans, out);
          swap(nums[i], nums[index]);
          out.pop_back();
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>out;
        solve(nums, 0, ans, out);
        return ans;
    }
};
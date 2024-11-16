class Solution {
public:
  
  void permutations(vector<int> &nums, int i, set<vector<int>> &Unique){
    if(i >= nums.size())
    {
     Unique.insert(nums);
      return;  
    }
     
    for(int j = i; j < nums.size(); j++){
      swap(nums[i], nums[j]);
      permutations(nums, i + 1, Unique);
      swap(nums[i], nums[j]);
    }
    
    
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>Unique;
        permutations(nums, 0, Unique);
      vector<vector<int>> ans(Unique.begin(), Unique.end());
      return ans;
    }
};
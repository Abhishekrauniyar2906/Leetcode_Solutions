class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
      vector<int> ans;
k = k % n;

      for(int i = nums.size() - k; i < nums.size(); i++){
        ans.push_back(nums[i]);
      }
       vector<int> temp;
      for(int i = 0; i < k; i++){
         temp.push_back(ans[i]);
         
      }
      for(int i = 0; i < nums.size() - k; i++){
        temp.push_back(nums[i]);
      }
      for(int i = 0; i < temp.size(); i++){
        nums[i] = temp[i];
      }
    }
};
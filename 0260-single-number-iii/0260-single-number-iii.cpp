class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
      
      unordered_map<long long, long long>mp;
      
      for(auto m:nums){
        mp[m]++;
      }
      
      vector<int>ans;
      
      for(auto &b: mp){
         if(b.second == 1){
          ans.push_back(b.first);
         }
      }
      return ans;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();
      map<int, int> mp;
      
      for(auto a: nums){
        mp[a]++;
      }
       int ans = 0;
      for(auto b: mp){
        if(b.second == 1){
        ans =  b.first;
        }
      }
      return ans;
    }
};
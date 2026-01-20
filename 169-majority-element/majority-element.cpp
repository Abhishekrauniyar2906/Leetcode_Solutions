class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
        unordered_map<int,int>mp;

        for(auto it : nums){
          mp[it]++;
        }

        n = n / 2;
       int ans = -1;
        for(auto it : mp){
          if(it.second > n){
           ans = it.first;
          }
        }
        return ans;
    }
};
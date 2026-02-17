class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp.insert({0,1});
        
        int ans = 0;
        int n = nums.size();
        int sum = 0;
        for(int right = 0; right < n; right++){
          sum += nums[right];

          if(mp.find(sum - goal) != mp.end()){
            ans += mp[sum - goal];
          }
          mp[sum]++;
        }
        return ans;
    }
};
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
     unordered_map<int,int>mp;
     mp[0] = 1;

     int sum = 0;
     int ans = 0;

     int left = 0;

     for(int right = 0; right < nums.size(); right++){
      sum += nums[right];

      if(mp.find(sum - goal) != mp.end()){
        ans += mp[sum - goal];
      }
      mp[sum]++;
     }
     return ans;   
    }
};
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int oddCount = 0;
        int csum = 0;

        int ans = 0;

        int l = 0;

        for(int r = 0; r < nums.size(); r++){
          if(nums[r] & 1){
            oddCount++;
          }
          if(mp.find(oddCount - k) != mp.end()){
            ans += mp[oddCount - k];
          }
          mp[oddCount]++;
        }
        return ans;
    }
};
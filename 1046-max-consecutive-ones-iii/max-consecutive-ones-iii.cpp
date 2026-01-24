class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int maxi = 0;
        int left = 0;
        int ans = 0;
        for(int right = 0; right < nums.size(); right++){
          if(nums[right] == 1){
          mp[nums[right]]++;
          }

          maxi = max(maxi, mp[nums[right]]);

          while((right - left + 1) - maxi > k){
            mp[nums[left]]--;
            left++;
          }
          ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
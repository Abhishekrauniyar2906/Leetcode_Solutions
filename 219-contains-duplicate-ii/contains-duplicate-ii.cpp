class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      if(nums.size() <= 1){
        return false;
      }
        unordered_map<int,int>mp;

        for(int right = 0; right < nums.size(); right++){

          if(mp.find(nums[right]) != mp.end()){
            if(abs(right - mp[nums[right]] <= k)){
              return true;
            }
          }
          mp[nums[right]] = right;
         }
         return false;
    }
};
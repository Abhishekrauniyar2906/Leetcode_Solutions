class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int>mp;

     for(auto x : nums1){
      mp[x]++;
     }
     int mini = INT_MAX;
  
    
     for(auto x : nums2){
     
      if(mp[x] >= 1){
        mini = min(mini, x);
      }
     }
     return mini == INT_MAX ? -1 : mini;
    }
};
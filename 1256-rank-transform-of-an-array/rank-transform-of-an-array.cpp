class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
      vector<int>temp = nums;
      sort(nums.begin(), nums.end());
        unordered_map<int,int>mp;
        vector<int>ans;
       int count = 1;
        for(auto x : nums){
          if(mp.find(x) == mp.end()){
            mp[x] = count++;
          }
        }

     

        for(auto x : temp){
          // cout << mp[x] <<endl;
          ans.push_back(mp[x]);
        }
        return ans;
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.insert({0,1});
        int ans = 0;
        int csum = 0;
        for(int i = 0; i < nums.size(); i++){
            csum += nums[i];

            if(mp.find(csum - k) != mp.end()){
                ans += mp[csum - k];
            }

            mp[csum]++;
        }

        return ans;
    }
};
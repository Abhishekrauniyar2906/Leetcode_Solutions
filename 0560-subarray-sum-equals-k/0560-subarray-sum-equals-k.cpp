class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int total = 0;
        int prefixSum = 0;
        for(int i = 0; i < nums.size(); i++){
            prefixSum += nums[i];
            if(mp.count(prefixSum - k)){
                total += mp[prefixSum - k];
                mp[prefixSum]++;
            }
            else{
                mp[prefixSum]++;
            }
        }
        return total;
    }
};
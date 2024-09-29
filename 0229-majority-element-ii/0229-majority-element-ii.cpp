class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>hash;
        int n = nums.size();
        for(auto a:nums){
            hash[a]++;
        }
        
        n = n/3;
        vector<int>ans;
        
        for(auto x:hash)
            if(x.second > n){
              ans.push_back(x.first);
            }
        
            return ans;
    
        
    }
};
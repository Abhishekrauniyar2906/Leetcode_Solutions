class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;

        for(auto num : nums){
            if(num % 2 == 0)
            mp[num]++;
        }
             int maxFreq = 0;
        int result = -1;
        for(auto ans : mp){
            if (ans.second > maxFreq) {
                maxFreq = ans.second;
                result = ans.first;
            }
        }
        return result;
    }
};
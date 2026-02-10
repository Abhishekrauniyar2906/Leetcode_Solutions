class Solution {
public:
    int longestBalanced(string s) {
        
         int ans = INT_MIN;
        
        for(int left = 0; left < s.size(); left++){
         unordered_map<char, int>mp;
            int maxFreq = 0;
          for(int right = left; right < s.size(); right++){
           mp[s[right]]++;
             maxFreq = max(maxFreq, mp[s[right]]);
            

            bool balanced = true;
            for(auto &it : mp){
            if(it.second != maxFreq){
         
               balanced = false;
               break;
            }
             
            }
           if(balanced){
           
              ans = max(ans, right - left + 1);
          

            }
            

          }
        }
        return ans;
    }
};
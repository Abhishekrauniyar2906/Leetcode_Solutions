class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        
        unordered_map<char, int>mp;
        int longest_len = 0;
        for(int right = 0; right < s.size(); right++){
          mp[s[right]]++;

          while(mp[s[right]] > 1){
            mp[s[left]]--;
            left++;
          }

           longest_len = max(longest_len, right - left + 1);
        }
        return longest_len;
    }
};
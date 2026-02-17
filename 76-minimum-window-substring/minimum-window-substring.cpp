class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        if(m > n) return "";
        unordered_map<char,int>sMap;
        unordered_map<char,int>tMap;
        
        for(auto ch : t){
          tMap[ch]++;
        }
        int left = 0;
        int ansIndex = 0;
        int ansLen = INT_MAX;
        int count = 0;
        for(int right = 0; right < s.size(); right++){
           sMap[s[right]]++;

           if(sMap[s[right]] <= tMap[s[right]]){
            count++;
           }

           while(count == m){
            
          int windowSize = right - left + 1;
          if(windowSize < ansLen){
            ansLen = windowSize;
            ansIndex = left;
          }
            sMap[s[left]]--;

            if(sMap[s[left]] < tMap[s[left]]){
              count--;
            }
            left++;
           
          
           }
        }
        return  ansLen == INT_MAX ? "" : s.substr(ansIndex, ansLen);
    }
};
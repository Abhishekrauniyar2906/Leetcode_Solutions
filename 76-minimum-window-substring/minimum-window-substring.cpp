class Solution {
public:
    string minWindow(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        if(len1 < len2){
            return "";
        }
        int start = 0;
        int e = 0;
        int ansIndex = -1;
        int ansLen = INT_MAX;
        int count = 0;

        unordered_map<char,int>sMap;
        unordered_map<char,int>tMap;
         
        for (char ch : t) {
            tMap[ch]++;
        }
        while(e < s.size()){

            char ch = s[e]; 
            sMap[ch]++;

            if(sMap[ch] <= tMap[ch]){
                count++;
            }
             
             if(count == len2){
                while(sMap[s[start]] > tMap[s[start]]){
               sMap[s[start]]--;
               start++;
            }

            int windowsize = e - start + 1;

            if(windowsize < ansLen){
               ansLen = windowsize;
               ansIndex = start;
            }
              
             
             }

             e++; 
          }

          if(ansIndex == -1){
            return "";
          }
         
         return s.substr(ansIndex, ansLen);
    }
};
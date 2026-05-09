class Solution {
public:

    bool isVowel(char ch){
      return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
     }
    int maxFreqSum(string s) {
        unordered_map<char,int>vMap, cMap;

        for(auto ch : s){
        
          if(isVowel(ch)){
            vMap[ch]++;
          }
          else{
            cMap[ch]++;
          }
        }
         
         int maxiVowel = 0;
         int maxiCons = 0;
        for(auto ch : vMap){
           maxiVowel = max(maxiVowel, ch.second);
        }

        for(auto ch : cMap){
          maxiCons = max(maxiCons, ch.second);
        }
        
        return maxiCons + maxiVowel;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashtable[256] = {0};
        
        for(int i = 0; i < s.size(); i++){
           hashtable[s[i]]++;
            
        }
        
        for(int i = 0; i < t.size(); i++){
            
            hashtable[t[i]]--;
        }
        for(int i = 0; i < 256; i++){

         if(hashtable[i] != 0){

          return false;
         }
        }
        return true;
    }
};
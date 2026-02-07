class Solution {
public:
     
     string solve(string s){
        int count = 0;
        string code = "";
        unordered_map<char, int>mp;

        for(auto ch : s){
          if(mp.find(ch) == mp.end()){
            mp[ch] = count;
            count++;
          }
          
          code += to_string(mp[ch]) + ",";


        }
        return code;
     }
    bool isIsomorphic(string s, string t) {
        
        if(s.length() != t.length()){
          return false;
        }
        string s1 = solve(s);
        string t1 = solve(t);
        
        return s1 == t1;
        
    }
};
class Solution {
public:
    string decodeMessage(string key, string message) {
        // is qns me map create karna hoga badhe hi simple tarike se

        unordered_map<char, char>mp;
        char start = 'a';

        for(auto ch : key){
          if(ch != ' ' && mp.find(ch) == mp.end()){
            mp[ch] = start;
           start++;
          
          }
          
        }

        string ans = "";

        for(auto ch : message){
           if(ch == ' '){
            ans += ' ';
           }
           else{
            ans += mp[ch];
           }
        }
       return ans;

    }
};
class Solution {
public:

   string solve(string word, string chars){
     unordered_map<char,int>mp;

     for(auto ch : chars){
      mp[ch]++;
     }
      
      string ans = "";
     for(int i = 0; i < word.size(); i++){
       if(mp[word[i]] > 0){
        ans += word[i];
        mp[word[i]]--;
       }
        
      

     }
    //  cout <<"the word ans is : " << ans << endl;
     return ans;
   } 
    int countCharacters(vector<string>& words, string chars) {
        string ans = "";
        int res = 0;
        for(int i = 0; i < words.size(); i++){
          string ans = solve(words[i], chars);
          // cout <<"the ans is : " << ans << endl;
          if(ans == words[i]){
            res += words[i].size();
            // cout <<"the res is : " << res << endl;
          }
        }
        return res;


    }
};
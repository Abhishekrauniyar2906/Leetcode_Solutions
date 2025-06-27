class Solution {
public:
   string createMapping(string str){
    char start = 'a';
    char mapping[256] = {0};

    for(char ch : str){
      if(mapping[ch] == 0){
        mapping[ch] = start++;
      }
    }

    for(int i = 0; i < str.size(); i++){
      str[i] = mapping[str[i]];
    }
    return str;
   }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         string patternMapped = createMapping(pattern);
        vector<string>ans;
   
        for(auto word : words){
          if(createMapping(word) == patternMapped){
            ans.push_back(word);
          }
        }

        return ans;
    }
};
class Solution {
public:
    string reverseWords(string s) {
      reverse(s.begin(), s.end());
        string words= "";
        string result = "";

        for(char ch : s){
          if(ch != ' '){
            words += ch;
          }
          else{
                if(!words.empty()){
                reverse(words.begin(), words.end());
                result += words;
                result += " ";
                words = "";
                }
          }
        }

        if(!words.empty()){
        reverse(words.begin(), words.end());
        result += words;
        }

        if(!result.empty() && result.back() == ' '){
          result.pop_back();
        }
        return result;
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;

        for(auto ch : s){
          if(!st1.empty()){
            if(ch == '#'){
              st1.pop();
            }
            else{
              st1.push(ch);
            }
          }
          else{
            if(ch != '#'){
              st1.push(ch);
            }
          }
        }

        for(auto ch : t){
          if(!st2.empty()){
            if(ch == '#'){
              st2.pop();
            }
            else{
              st2.push(ch);
            }
          }
          else{
            if(ch != '#'){
              st2.push(ch);
            }
          }
        }

           return st1 == st2;
    }
};
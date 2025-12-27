class Solution {
public:
    string removeDuplicates(string s) {

      if(s.length() <= 1){
        return s;
      }
        string ans = "";

        for(char ch : s){
          ans.push_back(ch);

          int len = ans.size();

          if(len >= 2){
            if(len > 0 && ans[len - 1] == ans[len - 2]){
              ans.pop_back();
              ans.pop_back();
            }
          }
        }

        return ans;
    }
};
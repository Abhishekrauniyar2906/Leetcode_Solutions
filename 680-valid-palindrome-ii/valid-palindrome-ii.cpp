class Solution {
public:

    bool solve(string s, int i, int j){
      while(i < j){
        if(s[i] != s[j]){
          return false;
        }
        i++;
        j--;
      }
      return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
      
        while(i < j){
          if(s[i] == s[j]){
            i++;
            j--;
          }
          else{
            // call only once i mean only one deletion is allowed so exit immediately after one call
            return solve(s, i + 1, j) || solve(s, i, j - 1);
          }
        }
        return true;
    }
};
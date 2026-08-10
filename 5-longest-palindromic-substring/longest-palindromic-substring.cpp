class Solution {
public:
    
    bool solve(string &s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxlen = 0;
        int si = -1;
        for(int i= 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(solve(s, i, j)){
                    if(j - i + 1 > maxlen){
                        maxlen = j - i + 1;
                        si = i;
                    }
                }
            }
        }
        return s.substr(si, maxlen);
    }
};
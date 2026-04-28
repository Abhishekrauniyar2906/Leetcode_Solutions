class Solution {
public:
    

bool isPalindrome(string &s, int i, int j){
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
string longestPalindrome(string s){
    int maxLen = INT_MIN;
    int startingIndex = -1;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(isPalindrome(s, i, j)){
            if(j - i + 1 > maxLen){
                maxLen = j - i + 1;
                startingIndex = i;
            }
        }
        }
    }
    return s.substr(startingIndex, maxLen);
}

};
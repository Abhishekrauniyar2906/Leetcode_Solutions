class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int left = 0;
        int right = 0;

        for(int i = 0; i < s.size(); i++){
          
          // for odd indexed;
          left = i;
          right = i;
          while(left >= 0 && right < s.size() && s[left] == s[right]){
            count++;
            left--;
            right++;
          }
           
           // for even indexed
           left = i;
          right = i + 1;
        while(left >= 0 && right < s.size() && s[right] == s[left]){
           count++;
            left--;
            right++;
        }

        }
        return count;
    }
};
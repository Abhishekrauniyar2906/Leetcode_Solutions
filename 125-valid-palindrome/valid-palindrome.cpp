class Solution {
public:
    bool isPalindrome(string s) {
      int left = 0;
      int right = s.size() - 1;
      while(left < right){
        // left pointer ko next alphanumeric pe le jao

       
       while(left < right && !isalnum(s[left])){
        left++;
       }
       while(left < right && !isalnum(s[right])){
        right--;
       }
       if(tolower(s[left]) != tolower(s[right])){
        return false;
       }
       left++;
       right--;
      }
      return true;
    }
};
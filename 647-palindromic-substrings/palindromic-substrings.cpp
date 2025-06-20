class Solution {
public:

   int expand(string s, int i, int j){
    int count = 0;

     while(i >= 0 && j < s.size() && s[i] == s[j]){
       
         count++;
         i--;
         j++;
       
     }
      
     return count;
   }
    int countSubstrings(string s) {
        int totalcount = 0;

      for(int i = 0; i < s.size(); i++){
        int oddans = expand(s, i, i);
        int evenans = expand(s, i, i + 1);
        totalcount += oddans + evenans;
      }
      return totalcount;
    }
};
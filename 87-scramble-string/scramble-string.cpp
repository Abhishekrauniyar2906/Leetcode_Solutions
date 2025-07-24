class Solution {
public:
   unordered_map<string, bool>dp;
    bool isScramble(string a, string b) {
        int n = a.length();

        if(a.compare(b) == 0) return true;
        if(a.length() != b.length()) return false;
        
           string key = a + "#" + b;
         if(dp.find(key) != dp.end()) return dp[key];

        string x = a, y = b;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        if(x != y) return dp[key] = false; 

      

        for(int i = 1; i <= n - 1; i++){
          // swap 
           bool cond1 = isScramble(a.substr(0, i), b.substr(n - i, i)) == true && 
         isScramble(a.substr(i, n - i), b.substr(0, n - i))== true;

         bool cond2 = isScramble(a.substr(0, i), b.substr(0, i)) == true && 
         isScramble(a.substr(i, n - i), b.substr(i, n - i)) == true;
         
        if(cond1 || cond2){
        return dp[key] = true;
        //  break;
        }
        }
         return dp[key] = false;        
       
    } 
};
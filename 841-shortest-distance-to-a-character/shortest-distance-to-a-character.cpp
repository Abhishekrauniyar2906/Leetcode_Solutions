class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        // we solved this problem using two pass approach from left to right and right to left and solve using o(n) and 
       // take the min after that both 
       int n = s.size();
       int lastseen = -1e9;
       vector<int>left(n), right(n), ans(n);
       for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
          lastseen = i;
        }
        
          left[i] = i - lastseen;
        
       }
        lastseen = 1e9;
       for(int i = n - 1; i >= 0; i--){
        if(s[i] == c){
          lastseen = i;
        }
        
          right[i] = lastseen - i;
        
       }

       for(int i = 0; i < n; i++){
        ans[i] = min(left[i], right[i]);
       }
       return ans;
    }
};
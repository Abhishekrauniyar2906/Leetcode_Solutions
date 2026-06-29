class Solution {
public:

   bool solve(string ch, string word){
    
    if(word.find(ch) != string::npos){
      return true;
    }
    return false;
   }
    int numOfStrings(vector<string>& patterns, string word) {
      int sum = 0, count = 0;

      for(auto ch : patterns){
        if(solve(ch, word)){
          count = 1;
          sum += count;
        }
      }   
      return sum;
    }
};
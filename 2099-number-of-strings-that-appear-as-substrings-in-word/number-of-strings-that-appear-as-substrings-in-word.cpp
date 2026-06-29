class Solution {
public:

  //  bool solve(string ch, string word){
    
  //   if(word.find(ch) != string::npos){
  //     return true;
  //   }
  //   return false;
  //  }
    int numOfStrings(vector<string>& patterns, string word) {
      int sum = 0, count = 1;
       
       for(auto x : patterns){
         if(word.find(x) != string::npos){
          sum += count;
         }
       }
       return sum;
    }
};
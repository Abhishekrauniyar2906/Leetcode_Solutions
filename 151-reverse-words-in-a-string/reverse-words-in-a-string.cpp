class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token = " ";
        string result;

      while(ss >> token){
        if(result != ""){
          result = token + " " + result;
        }
        else{
          result = token + result;
        }
      }
      return result;
    }
};
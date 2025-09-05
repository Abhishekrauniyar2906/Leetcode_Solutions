class Solution {
public:

    void solve(string &digits, string &output, vector<string> &mapping, vector<string>&result, int index){
    
    if(index >= digits.size()){
      result.push_back(output);
      return;
    } 
      
      string letters = mapping[digits[index] - '0'];
      for(auto ch : letters){
        output.push_back(ch);
        solve(digits, output, mapping, result, index + 1);
        output.pop_back();
      }


    }
    vector<string> letterCombinations(string digits) {
      if(digits.empty()) return vector<string>{};
        vector<string>mapping = {"", "", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        string output;
        vector<string>result;

        solve(digits, output, mapping, result, 0);
        return result;
    }
};
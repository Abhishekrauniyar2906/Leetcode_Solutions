class Solution {
public:

    void solve(string &digits, vector<string> &mapping, vector<string>&ans, string &output, int index){
      if(index == digits.size()){
        ans.push_back(output);
        return;
      }

      string str = mapping[digits[index] - '0'];
    //  cout <<"str " << str << endl;

      for(int i = 0; i < str.size(); i++){
//        cout <<"str[i] " << str[i] << endl;
        output.push_back(str[i]);

        solve(digits, mapping, ans, output, index + 1);
        output.pop_back();
      }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;

        if(digits.empty()) return ans;

        vector<string> mapping = {"", "", "abc" ,"def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        string output = "";
       
       solve(digits, mapping, ans, output, 0);
       return ans;
    }
};
class Solution {
public:

void solve(string digits, int index, vector<string>&mapping, string &output, vector<string>&ans){
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }

        string res = mapping[digits[index] - '0'];

        for(int i = 0; i < res.size(); i++){
            output.push_back(res[i]);
            solve(digits, index + 1, mapping, output, ans);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output = "";
        vector<string>ans;
       solve(digits, 0, mapping, output, ans);
       return ans;
    }
};
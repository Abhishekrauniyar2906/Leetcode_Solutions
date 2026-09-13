class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>ans(numRows);
        int row = 0;
        bool doingDown = true;

        for(auto ch : s){
            ans[row] += ch;

            if(row == 0){
                 doingDown = true;
            }
            if(row == numRows - 1){
                doingDown = false;
            }
            row += doingDown ? 1 : -1;
        }
        string res = "";
        for(auto ch : ans){
            res += ch;
        }
        return res;
    }
};
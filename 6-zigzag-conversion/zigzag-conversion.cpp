class Solution {
public:
    string convert(string s, int numRows) {
        if(s.size() < numRows) return s;
        if(numRows == 1) return s;

        vector<string>ans(numRows);
        int row = 0;
       bool dir = true;
        for(auto ch : s){
            ans[row] += ch;

            if(row == 0){
                dir = true; 
            }

            if(row == numRows - 1){
                dir = false;
            }
            row += (dir == true) ? 1 : -1;
        }
        string res = "";
        for(auto i : ans){
            res += i;
        }
        return res;
    }
};
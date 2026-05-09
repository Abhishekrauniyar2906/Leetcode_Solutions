class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows > s.size()) return s;
       
       if(numRows == 1) return s;
        vector<string>ans(numRows);
        string res = "";
        int row = 0;
        bool isgoingDown = true;

        for(auto ch : s){
           ans[row] += ch;

           if(row == 0){
            isgoingDown = true;
           }

           if(row == numRows - 1){
             isgoingDown = false;
           }

           row += isgoingDown == true ? 1 : -1;
           
        }
        
        for(auto x : ans){
          res += x;
        }
        return res;
    }
};
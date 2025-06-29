class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.length() <= numRows){
          return s;
        }
        vector<string>zigzagRow(numRows);
        int rows = 0;
        int i = 0;
        bool direction = true;

        while(i < s.size()){
          if(direction){
            while(rows < numRows && i < s.size()){
              zigzagRow[rows++].push_back(s[i++]);
            }
            rows = numRows - 2;
            direction = false;
          }
           


          else {
            while(rows >= 0 && i < s.size()){
              zigzagRow[rows--].push_back(s[i++]);
            }
            rows = 1;
            direction = true;
          }
          
          }

          string ans = "";
          
          for(auto str : zigzagRow){
            ans += str;
          }
           return ans;
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows){
          return s;
        }
         
        vector<string>rows(numRows); // like 0, 1, 2 to store a value of the string
        int row = 0;
        int  goingDown_bottom = true;
        for(char ch : s){
          rows[row] += ch;

          if(row == 0){
            goingDown_bottom = true;
          }
          else if(row == numRows - 1){
            goingDown_bottom = false; // yha pe bottom se upar jayenge
          }
          // now we will update the row based on the condition where we want to according to the direction

          row += goingDown_bottom ? 1 : - 1; // 1 means top -> down and -1 means bottom to top

        }

        string ans = "";
        for(string &it : rows){
          ans += it;
        }
        return ans;
    }
};
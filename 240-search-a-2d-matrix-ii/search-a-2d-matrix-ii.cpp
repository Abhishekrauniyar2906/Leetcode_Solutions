class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int k) {
          int row = 0;
          int col = m[0].size() - 1;
          
          while(row < m.size() && col >= 0){
            if(m[row][col] == k){
              return true;
            }
            else if(m[row][col] > k){
              col--;
            }
            else{
              row++;
            }
           }
             return false;
    }
};
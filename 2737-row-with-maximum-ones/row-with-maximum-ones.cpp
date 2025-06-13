class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       int row = mat.size();
      int col = mat[0].size();

      int maxCount = 0;
        int minRow = 0;

      for(int i = 0; i < row; i++){
        int count = 0;
        for(int j = 0; j < col; j++){
          count += mat[i][j];
        }
        if(count > maxCount){
          maxCount = count;
          minRow = i;
        }
      }
  
      return {minRow, maxCount};   
    }
};
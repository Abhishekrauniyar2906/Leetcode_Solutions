class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>result(n, vector<int>(n, 0));
       int num = 1;

      int startingRow = 0;
      int endingRow = n - 1;
      int startingCol = 0;
      int endingCol = n - 1;

      while(num <= n * n){
        for(int i = startingCol; i <= endingCol && num <= n * n;  i++){
          result[startingRow][i] = num++;
        }
        startingRow++;

        for(int i = startingRow; i <= endingRow && num <= n * n; i++){
          result[i][endingCol] = num++;
        }
        endingCol--;
        for(int i = endingCol; i >= startingCol && num <= n * n; i--){
          result[endingRow][i] = num++;
        }
        endingRow--;
          
        for(int i = endingRow; i >= startingRow && num <= n * n; i--){
          result[i][startingCol] = num++;
        }
        startingCol++;
      }
      return result;
    }
};
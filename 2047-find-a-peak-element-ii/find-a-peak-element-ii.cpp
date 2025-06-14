class Solution {
public:
  int maxRowIndex(vector<vector<int>>& mat, int n, int m, int col){
    int maxrowIndex = -1;
    int index = -1;

    for(int i = 0; i < n; i++){
      if(mat[i][col] > maxrowIndex){
        maxrowIndex = mat[i][col];
        index = i;
      }
    }
    return index;
  }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
      int m = mat[0].size();

      int low = 0;
      int high = m - 1;

      while(low <= high){
        int mid = low + (high - low) / 2;

        int rowIndex = maxRowIndex(mat, n, m, mid);

        int left = mid - 1 >= 0 ? mat[rowIndex][mid - 1] : -1;
        int right = mid + 1 < m ? mat[rowIndex][mid + 1] : - 1;

        if(mat[rowIndex][mid] > left && mat[rowIndex][mid] > right){
          return {rowIndex, mid};
        }
        else if(mat[rowIndex][mid] < left){
          high = mid - 1;
        }
        else{
         low = mid + 1;
        }
      }
      return {-1, -1};
    }
};
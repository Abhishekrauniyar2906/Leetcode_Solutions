class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int col = mat[0].size();
        int s = 0;
        int e = n * col - 1;
        

        while(s <= e){
            int mid = s + (e - s) / 2;
            int rowIndex = mid / col, colIndex = mid % col;

            if(mat[rowIndex][colIndex] == target) return true;
            else if(mat[rowIndex][colIndex] < target) s = mid + 1;
            else e = mid - 1;
        }
        return false;
    }

};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int n = row * col;

        int s = 0;
        int e = n - 1;

        while(s <= e){
            int mid = s + (e - s) / 2;
            int row_index = mid / col;
            int col_index = mid % col;

            int c = matrix[row_index][col_index];

            if(c == target){
                return true;
            }

            else if(c < target){
                s = mid + 1;
            }

            else{
                e = mid - 1;
            }

        }
            return false;   
    }
 
};
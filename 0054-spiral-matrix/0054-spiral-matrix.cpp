class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m * n;
        
        int startingRow = 0;
        int endingRow = m - 1;
        int startingCol = 0;
        int endingCol = n - 1;
        
        int count = 0;
        
        while(count < total_elements){
            // Traverse from left to right along the top row
            for(int i = startingCol; i <= endingCol && count < total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            // Traverse from top to bottom along the right column
            for(int i = startingRow; i <= endingRow && count < total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            // Traverse from right to left along the bottom row
            for(int i = endingCol; i >= startingCol && count < total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            // Traverse from bottom to top along the left column
            for(int i = endingRow; i >= startingRow && count < total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
    }
};

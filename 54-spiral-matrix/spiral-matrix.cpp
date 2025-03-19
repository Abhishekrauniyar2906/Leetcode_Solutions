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
        
        
        
        while(ans.size() < total_elements){
            
            for(int i = startingCol; i <= endingCol && ans.size() < total_elements; i++){
                ans.push_back(matrix[startingRow][i]);
                
            }
            startingRow++;
            
       
            for(int i = startingRow; i <= endingRow && ans.size() < total_elements; i++){
                ans.push_back(matrix[i][endingCol]);
              
            }
            endingCol--;
       
            for(int i = endingCol; i >= startingCol && ans.size() < total_elements; i--){
                ans.push_back(matrix[endingRow][i]);
               
            }
            endingRow--;
            
            for(int i = endingRow; i >= startingRow && ans.size() < total_elements; i--){
                ans.push_back(matrix[i][startingCol]);
                
            }
            startingCol++;
        }
        
        return ans;
    }
};

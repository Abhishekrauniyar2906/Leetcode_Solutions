class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
    int n = matrix.size();      // Number of rows
    int m = matrix[0].size();   // Number of columns
    vector<vector<int>> ans(m, vector<int>(n)); // Transposed matrix with size m x n

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans[j][i] = matrix[i][j]; // Assign the transposed element
        }
    }
    
    return ans;
}

    
};
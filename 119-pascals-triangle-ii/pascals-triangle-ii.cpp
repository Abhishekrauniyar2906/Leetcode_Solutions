class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>mat;

        for(int i = 0; i <= rowIndex; i++){
           mat.push_back(vector<int>(i + 1));
            for(int j = 0; j <= i; j++){
           if(i == j || j == 0){
            mat[i][j] = 1;
           }
           else{
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
           }
            }

        }
    
        vector<int>ans;

        for(int j = 0; j <= rowIndex; j++){
          ans.push_back(mat[rowIndex][j]);
        }
        return ans;
    }
};
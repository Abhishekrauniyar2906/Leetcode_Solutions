class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     
         int n = grid.size() * grid.size();
        long long s1 = (long long)n * (n + 1) / 2;
        long long s2 = (long long)n * (n + 1) * (2 * n + 1)/ 6;
        long long sum1 = 0;
        long long sum2 = 0;
        for(auto row : grid){
          for(auto val : row){
            sum1 += val;
           sum2 += (long long)val * val;
          }
        }
         int val1 = sum1 - s1;
         int val2 = (sum2 - s2) / val1;
         int X = (val1 + val2) / 2;
         int Y = X - val1;
         
         return {(int)X, (int)Y};
    }
};
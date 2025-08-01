class Solution {
public:

    int solve(vector<int> &slices, int index, int endIndex, int n, vector<vector<int>> &dp){
        if(n == 0 || index > endIndex) return 0;

        if(dp[index][n] != -1) return dp[index][n];

        int take = slices[index] + solve(slices, index + 2, endIndex, n - 1, dp);
        int notTake = solve(slices, index + 1, endIndex, n, dp);

        return dp[index][n] = max(take, notTake);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k = slices.size();
        int eat = k / 3;
        
        vector<vector<int>> dp1(k, vector<int>(eat + 1, -1));
        vector<vector<int>> dp2(k, vector<int>(eat + 1, -1));
        int case1 = solve(slices, 0, k - 2, eat, dp1);
        int case2 = solve(slices, 1, k - 1, eat, dp2);

        return max(case1, case2);
    }
};
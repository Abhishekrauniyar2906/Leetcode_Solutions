class Solution {
public:
    int memo[301][5001]; // max coins = 300, max amount = 5000

    int solve(int i, int amount, vector<int>& coins) {
        if (amount == 0) return 1;
        if (i == coins.size() || amount < 0) return 0;

        if (memo[i][amount] != -1) return memo[i][amount];

        // pick or skip the coin
        int pick = solve(i, amount - coins[i], coins);   // Stay on same i (unbounded)
        int skip = solve(i + 1, amount, coins);          // Move to next coin

        return memo[i][amount] = pick + skip;
    }

    int change(int amount, vector<int>& coins) {
        memset(memo, -1, sizeof(memo));
        return solve(0, amount, coins);
    }
};

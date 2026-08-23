class Solution {
public:
    int climbStairs(int n) {
        int f = 1;
        int s = 2;
        if(n == 1) return f;
        if(n == 2) return s;

        for(int i = 3; i <= n; i++){
            int t = f +s;
            f = s;
            s =t;
        }
        return s;
    }
};
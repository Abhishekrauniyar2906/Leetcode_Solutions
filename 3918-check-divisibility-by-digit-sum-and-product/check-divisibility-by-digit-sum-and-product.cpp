class Solution {
public:
    pair<int,int> solve(int n){
        int sum = 0, prod = 1;

        while(n > 0){
            int digit = n % 10;
            sum += digit;
            prod *= digit;
            n = n / 10;
        }
        return {sum, prod};
    }
    bool checkDivisibility(int n) {
        // if(n <= 9) return false;
        pair<int,int> p = solve(n);  
        int sum = p.first;
        int prod = p.second;
        cout << sum << " " << prod;
        // int ans = sum + prod;
        // ans = ans < (sum + prod) ? 0 : sum + prod;
        return n % (sum + prod) == 0;
        }
};
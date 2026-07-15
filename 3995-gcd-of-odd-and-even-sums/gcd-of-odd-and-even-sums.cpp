class Solution {
public:

    int solve(int a, int b){
      while(b != 0){
        int r = a % b;
        a = b;
        b = r;
      }
      return a;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n *(n + 1);

        
        //cout <<sumOdd << " " << sumEven << endl;
        int ans = solve(sumOdd, sumEven);

        return ans;


    }
};
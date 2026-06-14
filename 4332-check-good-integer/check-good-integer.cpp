class Solution {
public:

    pair<int,int> digitSum(int n){
      int rem = 0;
      int  sum = 0;
      int square = 0;

      while(n > 0){
        int digit = n % 10;
        sum += digit;
        square += digit * digit;
        n = n / 10;
      }
      return {sum, square};
    }
    bool checkGoodInteger(int n) {
        pair<int,int> p = digitSum(n);

        int dSum = p.first;
        int sSum = p.second;

        return sSum - dSum >= 50 ? true : false;
    }
};
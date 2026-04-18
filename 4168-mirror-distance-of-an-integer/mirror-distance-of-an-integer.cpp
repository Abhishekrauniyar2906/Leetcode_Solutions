class Solution {
public:

    int rev(int n){
      int rem = 0;
      while(n > 0){
        rem = rem * 10 + n % 10;
        n= n / 10;
      }
      return rem;
    }
    int mirrorDistance(int n) {
        int r = rev(n);
        return abs(n - r);
    }
};
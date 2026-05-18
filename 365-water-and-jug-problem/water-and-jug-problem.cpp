class Solution {
public:

    int findGCD(int x, int y){
      while(y != 0){
        int r = x % y;
        x = y;
        y = r;
      }
      return x;
    }
    bool canMeasureWater(int x, int y, int target) {
        int gcd = findGCD(x, y);
        cout << gcd << endl;

        if(target > x + y) return false;

        if(target == 0) return true;

        if((target % gcd) == 0) return true;

        return false;
    }
};
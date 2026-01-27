class Solution {
public:
    int mySqrt(int x) {
        int ans = -1;

        int  s = 0;
        int  e = x;

        while(s <= e){
          long long mid = s + (e - s) / 2;
          long long sqrt = mid * mid;

          if(sqrt == x){
            return mid;

          }
          else if(sqrt < x){
            ans = mid;
            s = mid + 1;
          }
          else{
            e = mid - 1;
          }
        }
        return ans;
    }
};
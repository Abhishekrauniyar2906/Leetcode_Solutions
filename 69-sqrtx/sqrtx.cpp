class Solution {
public:
  long long  int mySqrt(int n) {
        int s=0;
        int e=n;
        int ans=-1;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            // long long int square =mid*mid;
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid<n){
                ans=mid;
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return ans;
    }
};
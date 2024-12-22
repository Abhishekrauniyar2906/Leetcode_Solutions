/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int e=n;
        int a=0;
        while(s<=e){
            int mid=(int)(s/2.0 + e/2.0);
            int ans=guess(mid);
            if(ans==0){

                a=mid;
                break;
            }
            else if(ans==-1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return a;
    }
};
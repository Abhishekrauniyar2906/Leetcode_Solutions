class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_check = start ^ goal;
        int ans = 0;
        while(xor_check > 0){
            ans += xor_check & 1;
            xor_check >>= 1;
        }
        
        return ans;
    }
};



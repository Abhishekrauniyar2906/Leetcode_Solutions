class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
         long long N = arr.size();
     long long S1_N = N * (N+1)/2;
     long long S2_N = (N * (N + 1) * (2 * N + 1)) / 6;
       long long  s1 = 0;
     long long s2 = 0;
     for(int i = 0; i < N; i++){
         s1 += arr[i];
         s2 += (long long)arr[i] * (long long)arr[i]; 
     }
     long long val_1 = s1 - S1_N;
     long long val_2 = s2 - S2_N;
     val_2 = val_2 / val_1;
     long long x = (val_2 + val_1) / 2; 
     long long y = x - val_1;
     return {(int)x ,(int)y};

    }
};
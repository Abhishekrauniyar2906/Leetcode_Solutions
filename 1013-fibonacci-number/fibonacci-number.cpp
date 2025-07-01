class Solution {
public:
    int solveUsingTopDown(int n){
      if(n == 0 || n == 1) return n;
     int prev = 0;
     int curr = 1;
      
      
     int ans;
     for(int i = 2; i <= n; i++){
      ans = prev + curr;
      prev = curr ;
      curr = ans;
     }
     return ans;
    }
    int fib(int n) {
       
        
        int ans = solveUsingTopDown(n);
        return ans;
    }
};
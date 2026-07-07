class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long rem = 0;
         string temp = "";

        while(n > 0){
          int digit = n % 10;
          if(digit != 0){
            sum += digit;
            rem = rem * 10 + digit;
            temp = to_string(rem);
          }
          
          n = n / 10;
        }
        
        reverse(temp.begin(), temp.end());
          long long a = temp == "" ? 0 : stoll(temp);
        return a * sum;
    }
};
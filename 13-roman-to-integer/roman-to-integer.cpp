class Solution {
public:
    
    int nums(char ch){
      if(ch == 'M'){
        return 1000;
      }

      if(ch == 'I'){
        return 1;
      }

      if(ch == 'X'){
        return 10;
      }

      if(ch == 'C'){
        return 100;
      }

      if(ch == 'L'){
        return 50;
      }

      if(ch == 'D'){
        return 500;
      }

      if(ch == 'V'){
        return 5;
      }
      return 0;
    }
    int romanToInt(string s) {
         int sum = 0;

         for(int i = 0; i < s.size(); i++){
           if(i < s.size() - 1 && nums(s[i]) < nums(s[i + 1])){
            sum = sum - nums(s[i]);
           }
           else{
            sum = sum + nums(s[i]);
           }
         
         }
        return sum;
         }
};
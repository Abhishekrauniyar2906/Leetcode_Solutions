class Solution {
public:

    vector<int> solve(int num){
      int rem = 0;
      vector<int>ans;
      while(num > 0){
        int digit = num % 10;
        ans.push_back(digit);
        num = num / 10; 
      }
      reverse(ans.begin(), ans.end());
     
      return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
          
        for(auto num : nums){
          vector<int> x = solve(num);
          for(auto a : x){
            // cout <<"a is : " << a << endl;
            ans.push_back(a);
          }
        }
        return ans;
    }
};
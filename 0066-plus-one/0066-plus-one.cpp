class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      reverse(digits.begin(), digits.end());
      vector<int> ans;
      int carry = 1;
      int i = 0;
      while(i < digits.size() || carry != 0){
      int total_sum = (i < digits.size() ? digits[i] : 0) + carry;
      int digits = total_sum % 10;
      ans.push_back(digits);
      carry = total_sum / 10;
       i++;
    }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};
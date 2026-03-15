class Solution {
public:

  int reverseNumber(int n){
    int rem = 0;

    while(n > 0){
      int digit = n % 10;
      rem = rem * 10 + digit;
      n = n / 10;
    }
    return rem;
  }
    int countDistinctIntegers(vector<int>& nums) {
       unordered_set<int>st;
       for(auto it : nums){
        st.insert(it);
        st.insert(reverseNumber(it));
       }
       return st.size();
    }
};
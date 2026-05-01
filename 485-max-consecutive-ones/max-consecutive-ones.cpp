class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int longest = INT_MIN;
         int count = 0;
        for(int i = 0; i < nums.size(); i++){
          if(nums[i] == 1){
            count++;
            longest = max(longest, count);
          }
          else{
            count = 0;
          }
        }
        return longest == INT_MIN ? 0 : longest;
    }
};
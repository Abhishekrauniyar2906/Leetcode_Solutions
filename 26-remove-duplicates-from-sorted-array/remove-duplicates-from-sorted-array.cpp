class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i = 0;
      int j = 1;

      while(j < nums.size()){
        if(nums[i] == nums[j]){
          j++;
        }
        else{
          i++;
          nums[i] = nums[j];
          j++;
        }
      }
      return i + 1; // why we are return a size with the help of index like index 4 + 1 means size wil become 5
    }
};
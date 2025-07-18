class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
      int s = 0;
      int e = nums.size() - 1;

     
      while(s <= e){
        int mid = s + (e - s) / 2;
        if((nums[mid]) - (mid + 1) < k){
          s = mid + 1;
        }
        else{
          e = mid - 1;
        }
      }
      return s + k;
    }
};
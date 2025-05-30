class Solution {
public:
    bool search(vector<int>& nums, int k) {

      int l = 0;
      int r = nums.size() - 1;

      while(l <= r){

        int mid = l + (r - l) / 2;
        if(nums[mid] == k){
          return true;
        }
        if(nums[l] == nums[mid] && nums[mid] == nums[r]){
          l++;
          r--;
        }

        // if the left part is sorted
        else if(nums[l] <= nums[mid]){
          if(nums[l] <= k && k < nums[mid]){
            r = mid - 1;
          }
          else{
            l = mid + 1;
          }
        }

        // if the right part is sorted

        else{
          if(nums[mid] < k && k <= nums[r]){
            l = mid + 1;
          }
          else{
            r = mid - 1;
          }
        }
      }

      return false;
    }
};
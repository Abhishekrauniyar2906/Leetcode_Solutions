class Solution {
public:

    
    int pivotIndex(vector<int>&nums, int target){
      int s = 0;
      int e = nums.size() - 1;

      while(s <= e){
        int mid = s + (e - s) / 2;

        if(mid - 1 >= 0  && nums[mid - 1] > nums[mid]){
          return  mid - 1;
        }
        
        if(mid + 1 < nums.size() && nums[mid] > nums[mid + 1]){
          return mid;
        }
        
        if(nums[s] > nums[mid]){
          e = mid - 1;
        }
        else{
          s = mid + 1;
        }
      }
      return -1;
    }
    int binarySearch(vector<int>&nums, int target, int s, int e){
      
      while(s <= e){
        int mid = s + (e - s) / 2;

        if(nums[mid] == target){
          return mid;
        }
        else if(nums[mid] < target){
          s = mid + 1;
        }
        else{
           e = mid - 1;
        }
      }
      return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = pivotIndex(nums, target);

        if(pivot == -1){
          return binarySearch(nums, target, 0, nums.size() - 1);
        }

        if(target >= nums[0] && target <= nums[pivot]){
          return binarySearch(nums, target, 0, pivot);
        }
        else{
          return binarySearch(nums, target, pivot + 1, nums.size() - 1);
        }
        return -1;
    }
};
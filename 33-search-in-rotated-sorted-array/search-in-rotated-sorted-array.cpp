class Solution {
public:
    
    
    int pivotIndex(vector<int>& nums){
        int n = nums.size();
       int s = 0;
        int e = n-1;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(s == e){
                return s;
            }
            if(mid + 1 < n && nums[mid] > nums[mid+1]){
               return mid;
            }
            else if(mid -1 >= 0 && nums[mid] < nums[mid-1]){
                return mid-1;
            }
            else if(nums[s] > nums[mid])
            {
                e = mid - 1;
            }
            else{
                 s = mid + 1;
            }
        }
        return -1;
    }
    
    int binarySearch(vector<int>& nums, int s, int e, int target){

     // int n = nums.size();
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
   int pivot = pivotIndex(nums);
        
        int n = nums.size();
        int ans = -1;
        
         // Check if the array is not rotated (pivot == -1)
         if (pivot == -1) 
         {
            return binarySearch(nums, 0, n - 1, target);
        }

        
//         Search in Part A
        
        if(target >=nums[0] && target <= nums[pivot])
        {
            ans = binarySearch(nums, 0, pivot, target);
        }
//         Search in part B
        else
        {
           ans = binarySearch(nums, pivot+1, n-1, target);
        }
                         
        return ans;
    }
};
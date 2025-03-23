class Solution {
public:
  
  void Merge(vector<int> &nums, int start, int end){
      int totalsize = end - start + 1;
    int gap = (totalsize / 2) + (totalsize % 2);
      
    
    while(gap > 0){
      int i = start;
      int j = i + gap;
      while(j <= end){
      if(nums[i] > nums[j]){
 
          swap(nums[i], nums[j]);     
      }
        i++; 
        j++;
      }
     gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }
  }
   void MergeSort(vector<int> &nums, int start, int end){
     if(start >= end){
       return;
     }
     int mid = start + (end - start) /2;
     MergeSort(nums, start, mid);
     MergeSort(nums, mid + 1, end);
     Merge(nums, start, end);
   }
    vector<int> sortArray(vector<int>& nums) {
       
      MergeSort(nums, 0, nums.size() - 1);
      return nums;
    }
};
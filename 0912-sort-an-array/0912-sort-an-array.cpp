class Solution {
public:
  
  void Merge(vector<int> &nums, int start, int end){
       int mid = start + (end - start) / 2;
      int left_len = mid - start + 1;
      int right_len = end - mid;
      
      int *left = new int[left_len];
      int *right = new int[right_len];
    
      int k = start;
      for(int i = 0;i < left_len; i++){
        left[i] = nums[k];
        k++;
      }
    
    for(int i = 0; i < right_len; i++){
      right[i] = nums[k];
      k++;
    }
    
    int leftIndex = 0;
    int rightIndex = 0;
    int main_array = start;
    
    while(leftIndex < left_len && rightIndex < right_len){
      if(left[leftIndex] < right[rightIndex]){
        nums[main_array] = left[leftIndex];
        main_array++;
        leftIndex++;
      }
      else{
        nums[main_array] = right[rightIndex];
        main_array++;
        rightIndex++;
      }
      
     }
    
    while(leftIndex < left_len){
      nums[main_array] = left[leftIndex];
      main_array++;
      leftIndex++;
    }
    while(rightIndex < right_len){
      nums[main_array] = right[rightIndex];
      main_array++;
      rightIndex++;
    }
        delete []left;
        delete []right;
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
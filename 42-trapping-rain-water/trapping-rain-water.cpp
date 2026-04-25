class Solution {
public:
    int trap(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        int left_max = INT_MIN;
        int right_max = INT_MIN;
        int sum = 0;

        while(left < right){
          if(arr[left] <= arr[right]){
            if(arr[left] >= left_max){
              left_max = arr[left];
            }
            else{
              sum += left_max - arr[left];
            }
            left++;
          }
          else{
            if(arr[right] >= right_max){
              right_max = arr[right];
            }
            else{
              sum += right_max - arr[right];
            }
              right--;
          }
        
        }
        return sum;
    }
};
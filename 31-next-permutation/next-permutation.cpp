class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int circularIndex = -1;

        for(int i = nums.size() - 1; i > 0; i--){
          if(i > 0 && nums[i - 1] < nums[i]){
            circularIndex = i - 1;
            break;
          }
         
        }
        //  cout << "circularIndex :" << circularIndex << endl;
        if(circularIndex == -1) {
          reverse(nums.begin(), nums.end());
          return;
        }

        for(int i = nums.size() -1; i > circularIndex; i--){
          if(nums[i] > nums[circularIndex]){
            swap(nums[i], nums[circularIndex]);
            break;
          }
        }
        reverse(nums.begin() + circularIndex + 1, nums.end());
    }
};
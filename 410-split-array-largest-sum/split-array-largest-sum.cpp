class Solution {
public:

  bool isPossible(vector<int> &nums, int mid, int k){
    int studentcount = 1;
    int pagesum = 0;

    for(int i = 0; i < nums.size(); i++){
      if(pagesum + nums[i] <= mid){
        pagesum += nums[i];
      }

      else{
        studentcount++;
        if(studentcount > k || nums[i] > mid){
          return false;
        }
        pagesum = 0;
        pagesum += nums[i];
      }
    }

    return true;
  }
    int splitArray(vector<int>& nums, int k) {
      int s = 0;
      int sum = accumulate(nums.begin(), nums.end(), 0);
      int e = sum;
      int ans = -1;

      while(s <= e){
        int mid = s + (e - s) / 2;
        if(isPossible(nums, mid, k)){
          ans = mid;
          e = mid - 1;
        }
        else{
          s = mid + 1;
        }
      }
      return ans;
    }
};
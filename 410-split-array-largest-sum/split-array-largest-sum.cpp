class Solution {
public:

    bool isPossible(vector<int>& nums, int mid , int k, int n){
         int studentCount = 1;
        int pageSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > mid) return false; // can't allocate this chunk

            if(pageSum + nums[i] <= mid) {
                pageSum += nums[i];
            } else {
                studentCount++;
                pageSum = nums[i];

                if(studentCount > k) return false;
            }
        }

        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
      int s = *max_element(nums.begin(), nums.end());
         
         int ans = -1;


         int e = accumulate(nums.begin(), nums.end(), 0);

         while(s <= e){
            int mid = s + (e - s) / 2;

            if(isPossible(nums, mid, k, n)){
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
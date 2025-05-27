class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>ans;

        for(int i = 1; i <= n; i++){
           ans.push_back(i);
        }
         int sum = 0;
         vector<int>nums1;
         vector<int>nums2;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] % m != 0){
               nums1.push_back(ans[i]);
            }
            else{
                nums2.push_back(ans[i]);
            }
        }
        int sum1 = accumulate(nums1.begin(), nums1.end(), 0);
        int sum2 = accumulate(nums2.begin(), nums2.end(), 0);
        return sum1 - sum2;
    }
};
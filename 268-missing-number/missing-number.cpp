class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(begin(nums), end(nums), 0);
           int n = nums.size();
        int  temp = n * (n + 1) / 2;

        return temp - sum;
    }
};
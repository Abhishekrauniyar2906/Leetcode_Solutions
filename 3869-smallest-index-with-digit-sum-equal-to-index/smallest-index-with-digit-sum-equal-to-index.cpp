class Solution {
public:

    int checkDigit(int num){
        int rem = 0;
        int sum = 0;

        while(num > 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int mini = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
        int sum = checkDigit(nums[i]);
        cout << sum << " ";
        if(sum == i){
         if(i < mini){
            mini = i;
         }
        }

        }

     return mini == INT_MAX ? -1 : mini;


    }
};
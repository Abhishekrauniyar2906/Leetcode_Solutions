class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int count = 0;
       for(auto num : nums){
        int temp = num;
         int digitcount = 0;
        while(temp > 0){
            temp = temp / 10;
            digitcount++;
             
        }

        if(digitcount % 2 == 0){
            count++;
        }
       } 
       return count;
    }
};
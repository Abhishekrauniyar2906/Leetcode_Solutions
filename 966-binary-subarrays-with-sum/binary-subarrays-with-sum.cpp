class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int s = 0;
        int e = 0;

        int count = 0;
        int prefixcount = 0;
        while(e < nums.size()){
            sum += nums[e];
            while(s < e && (nums[s] == 0 || sum > goal)){

                if(nums[s] == 1){
                    prefixcount = 0;
                }
                else{
                    prefixcount += 1;
                }
               sum = sum - nums[s];
                s++;
            }
                if(sum == goal){
                    count += prefixcount + 1;
                }

                e++;
                     }
       return count;
    }
};
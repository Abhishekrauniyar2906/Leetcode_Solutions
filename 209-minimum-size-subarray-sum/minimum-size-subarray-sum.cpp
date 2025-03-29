class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
          int s = 0;
          int e = 0;
          int len = INT_MAX;
          
        while(e < nums.size()){
            sum += nums[e];
        //    if sum == target ho
        // sum < target ho
        // Sum > target ho
           while(sum >= target){
            len = min(len, e - s + 1);
            // why remove because we want to explore other it is not valid for the range 
            sum = sum - nums[s];
            s++;
             
            }

             //loop se bahar matalba, guarantee -> sum < target
            //explore
            e++;
            
        }

        if(len == INT_MAX){
            return 0;
        }
        return len;
    }
};
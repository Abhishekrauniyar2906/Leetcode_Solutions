/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    let left_sum = 0;
    let total_sum = 0;
        
        for(let num of nums){
            total_sum += num;
        }
        for(let i = 0; i < nums.length; i++){
            if(left_sum == total_sum - left_sum - nums[i]){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
};
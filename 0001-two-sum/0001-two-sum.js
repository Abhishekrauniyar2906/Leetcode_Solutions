/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, k) {
 let n = nums.length;
        for(let i = 0; i < n-1 ; i++){
            for(let j = i + 1; j < n; j++){
                 let diff = nums[i] + nums[j];
                 if(diff == k){
                    return[i,j];
                 }
                }
            }
            return[];
};
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
     
     let sum = 0 
     let result =  []
    for(let i of nums )
    {
         sum += i
        result.push(sum)
    }
    return result
};
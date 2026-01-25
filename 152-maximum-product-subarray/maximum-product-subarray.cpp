class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //We find the maximum product subarray by keeping running products from both directions and updating the maximum product at each step.
        // suppose we have to find in a line which person is taller than me rather than checking all we just 
        // walk in a line we can find simply in a line which person is taller than me 
        //Imagine finding tallest person in a line.
         //Compare every person with every other person
// (huge work)
 //Walk once, keep tallest so far

// Both give same tallest person
// But effort is VERY different.
    
    int n = nums.size();
     
     int prefixProd = 1;
     int suffixProd = 1;

     int maxProd = nums[0];

     for(int i = 0; i < nums.size(); i++){
      
      if(prefixProd == 0){
        prefixProd = 1;
      }

      if(suffixProd == 0){
        suffixProd = 1;
      }

      prefixProd *= nums[i];
      suffixProd *= nums[n - 1 - i];

      maxProd = max(maxProd, max(suffixProd, prefixProd));
     }
     return maxProd;
    }
};
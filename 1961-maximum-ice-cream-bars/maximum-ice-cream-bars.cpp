class Solution {
public:
    int maxIceCream(vector<int>& arr, int coins) {
     sort(arr.begin(), arr.end());
   int count = 0;
      for(int i = 0; i < arr.size(); i++){
        if(coins >= 0 &&  arr[i] <= coins){
          coins -= arr[i];
          count++;
        }
        
      }   
      return count;
    }
};
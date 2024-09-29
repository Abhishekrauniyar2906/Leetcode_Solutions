class Solution {
public:
    int majorityElement(vector<int>& nums) {
//        unordered_map<int,int>mp;
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//           mp[nums[i]]++;   
//         }
        
//             n = n / 2;
//            for(auto x: mp){
                
//                 if(x.second > n){
//                    return x.first;
//                 }
//             }
        
           
        
         
        
//               return 0;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
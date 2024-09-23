class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        
        int i = 0;
        int j = i + 1;
        
        while(j < nums.size()){
           
        int diff = nums[j] - nums[i];
        
        if(diff == k){
            if(i != j){
           ans.insert({nums[i], nums[j]});
            }
            i++; 
            j++;
        }
           
        else if(diff > k){
            i++;
        }
           else{
             j++;
           }
           if(i == j){
               j++;
}
    } 
    
           return ans.size();
           }
};
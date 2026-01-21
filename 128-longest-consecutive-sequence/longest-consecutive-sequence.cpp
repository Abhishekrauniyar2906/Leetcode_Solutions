class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size() == 0){
        return 0;
      }
        int longestSequence = 0;
        unordered_set<int>st;
        // check if x - 1 element is not present it means we can start the count fromthat element
        for(auto it : nums){
          st.insert(it);
        }
        
        for(auto x : st){

          if(st.find(x - 1) == st.end()){
            int curr = x;
           int count = 1;
          

          while(st.find(curr + 1) != st.end()){
            curr++;
            count++;
          }

          longestSequence = max(longestSequence, count);
        }
        }
        return longestSequence;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;

        for(auto i : nums){
            st.insert(i);
        }
        int maxi = 0;

        for(auto x : st){
            if(st.find(x - 1) == st.end()){
                 int curr = x;
                 int count = 1;

                 while(st.find(curr + 1) != st.end()){
                    curr++;
                    count++;
                 }
                 maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
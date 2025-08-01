class Solution {
public:
   
   struct Compare{
    bool operator()(vector<int> &a, vector<int> &b){
      if(a[0] == b[0])
      return a[1] > b[1];
      return a[0] < b[0];
    }
   };
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), Compare());
        
        vector<int> ans;
        ans.push_back(envelopes[0][1]);
       for(int i = 1; i < envelopes.size(); i++){
            int h = envelopes[i][1];
           
            auto index = lower_bound(ans.begin(), ans.end(), h) - ans.begin();
            if(index == ans.size()){
              ans.push_back(h);
            }
            else{
              ans[index] = h;
            }
       }
          return ans.size();
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto num : nums){
          mp[num]++;
        } 


         for(auto i : mp){
          pq.push({i.second, i.first});
         }
         while(k--){
          auto front = pq.top();
          pq.pop();
          ans.push_back(front.second);
         }

         

        return ans;
    }
};
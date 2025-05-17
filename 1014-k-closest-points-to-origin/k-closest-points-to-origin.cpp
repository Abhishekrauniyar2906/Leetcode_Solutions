struct Compare{
    bool operator()(pair<int,int> &a, pair<int,int> &b){
        int distA = a.first * a.first + a.second * a.second;
        int distB =  b.first * b.first + b.second * b.second;

        return distA > distB;

    }
};

class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;

        priority_queue<pair<int, int>, vector<pair<int,int>>, Compare> minHeap;

            for(auto p : points){
                minHeap.push({p[0], p[1]});
            }
            
            while(!minHeap.empty() && k--){
                auto& top = minHeap.top();
                ans.push_back({top.first, top.second});
                minHeap.pop();
            }
          return ans;
    }
};
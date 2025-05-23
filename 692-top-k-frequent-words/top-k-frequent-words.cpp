struct Compare{
    bool operator()(pair<string,int> &a, pair<string,int> &b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};

class Solution {
public:

    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;

        unordered_map<string, int>freq;
        for(auto& word : words){
            freq[word]++;
        }

        for(auto& entry : freq){
            pq.push(entry);
        }
        
        vector<string>result;
        for(int i = 0; i < k && !pq.empty(); i++)
        {
            result.push_back(pq.top().first);
            pq.pop();
        }
      
        return result;

    }
};
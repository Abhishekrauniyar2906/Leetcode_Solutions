class Solution {
public:

  struct Compare{
    bool operator()(pair<char,int>&a, pair<char,int>&b){
      if(a.second == b.second){ 
        return a.first > b.first;
    }

    return a.second < b.second;
  }
  };
    string frequencySort(string s) {
      unordered_map<char, int>mp;
      priority_queue<pair<char,int>, vector<pair<char,int>>, Compare>maxHeap;
       
      for(auto ch : s){
         mp[ch]++;
      }
        for(auto [ch, freq] : mp){
        maxHeap.push({ch, freq});
        }
             string result = "";
        while(!maxHeap.empty()){
        auto [ch, freq] = maxHeap.top();
        maxHeap.pop();

        result += string(freq, ch);
        }
      return result;
    }
};
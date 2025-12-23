class Solution {
public:


  struct Compare{
    bool operator()(const string&a, string&b){
      if(a.length() == b.length()){
        return a < b; // lexicographcally
      }
      return a.length() < b.length(); 
    } 
  };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, Compare>pq;

        for(auto it : nums){
          pq.push(it);
        }
        
        while(--k){
       
          pq.pop();
        }
        return pq.top();
    }
};
class Solution {
public:
    int maxDistance(vector<int>& colors) {
      // int ans = 0;
      int ans = INT_MIN;
        for(int i = 0; i < colors.size() - 1; i++){
        for(int j = i + 1; j < colors.size(); j++){
          if(colors[i] == colors[j]){
            continue;
          }
          else{
            ans = max(ans, abs(i - j));
          }
        }
        }
        return ans == INT_MIN ? 0 : ans;
    }
};
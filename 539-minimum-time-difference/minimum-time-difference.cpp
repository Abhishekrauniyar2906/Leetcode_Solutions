class Solution {
public:
     int convertToMin(string time){
      int hr = stoi(time.substr(0,2));
      int min = stoi(time.substr(3,2));

      return 60 * hr + min;
     }
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mint;
        int ans = INT_MAX;
        for(auto time : timePoints){
          mint.push_back(convertToMin(time));
        }
       sort(mint.begin(), mint.end());
        for(int i = 1; i < mint.size(); i++){
          ans = min(ans, mint[i] - mint[i - 1]);
        }

        int circularDiff = 1440 - (mint.back() - mint.front());
        ans = min(ans, circularDiff);

        return ans;
    }
};
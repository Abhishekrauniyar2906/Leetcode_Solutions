class Solution {
public:

    bool isPossible(vector<int> &bloomDay, int m, int k, int mid){
      int bouquetsCount = 0;
      int consecutive_counts = 0;

      for(int i = 0; i < bloomDay.size(); i++){
        
        if(bloomDay[i] <= mid){
          consecutive_counts++;
        }
        else{
          consecutive_counts = 0;
        }

        if(consecutive_counts == k){
          bouquetsCount++;

          consecutive_counts = 0;
        }
        
        
      }
      return bouquetsCount >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long totalFlowers = (long long) m * k;
         
        if(totalFlowers > bloomDay.size()) return -1;

        int minDays = *min_element(bloomDay.begin(), bloomDay.end());
        int maxDays = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(minDays <= maxDays){
          int mid = minDays + (maxDays - minDays) / 2;

          if(isPossible(bloomDay, m, k, mid)){
            ans = mid;
            maxDays = mid - 1;
          }
          else{
            minDays = mid + 1;
          }
        } 
        return ans;
    }
};
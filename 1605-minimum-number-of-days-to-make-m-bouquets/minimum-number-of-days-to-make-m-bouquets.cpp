class Solution {
public:

    bool canMakeBouqets(vector<int>& bloomDay, int mid, int k, int m){
      int BoqueCount = 0;
      int consecutiveCount = 0; // k size count

      for(int i = 0; i < bloomDay.size(); i++){
        if(bloomDay[i] <= mid){
          consecutiveCount++;
        }
        else{
          consecutiveCount = 0;
        }

        if(consecutiveCount == k){
          BoqueCount++;
        
          consecutiveCount = 0;
        }
      }
      return BoqueCount >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
      int start_days = 0;
      int end_days = *max_element(bloomDay.begin(), bloomDay.end());
      
      int min_days = -1;

      while(start_days <= end_days){
        int mid = start_days + (end_days - start_days) / 2;

        if(canMakeBouqets(bloomDay, mid, k, m)){
          min_days = mid;
          end_days = mid - 1;
        }

        else{
          start_days = mid + 1;
        }
      }
      return min_days;
    }
};
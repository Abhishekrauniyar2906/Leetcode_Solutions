class Solution {
public:

    bool isPossible(vector<int>& weights, int mid, int days){
      int sum = 0;
      int D = 1;

      for(int i = 0; i < weights.size(); i++){
        if(sum + weights[i] <= mid) {
          sum +=  weights[i];
        } 
        else{
          sum = weights[i];
          D++;
      }
      }
      return (D <= days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
      int s = *max_element(weights.begin(), weights.end());
      int e = accumulate(weights.begin(), weights.end(), 0);

      int ans = -1;

      while(s <= e){
        int mid = (s + e) >> 1;
        if(isPossible(weights, mid, days)){
          ans = mid;
          e = mid - 1;
        }
        else{
          s = mid + 1;
        }
      }
      return ans;
    }
};
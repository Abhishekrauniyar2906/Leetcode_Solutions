class Solution {
public:

  bool isPossible(vector<int> &position, int m, int mid){
    int cowCount = 1;
     int lastPos = position[0];

     for(int i = 0; i < position.size(); i++){
        if(position[i] - lastPos >= mid){
          cowCount++;
          if(cowCount == m){
            return true;
          }
          lastPos = position[i];
        } 
     }
     return false;
  }
    int maxDistance(vector<int>& position, int m) {
     sort(position.begin(), position.end());

      int s = 0;
     

      int maxi = *max_element(position.begin(), position.end());

      int e = maxi;
      int ans = -1;
      while(s <= e){
        int mid = s + (e - s) / 2;

        if(isPossible(position, m, mid)){
          ans = mid;
          s = mid + 1;
        }
        else{
          e = mid - 1;
        }
      }
      return ans;
    }
};
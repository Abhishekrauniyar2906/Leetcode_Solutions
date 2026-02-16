class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
      int n = arr.size();
        for(int i = 0; i < n; i++){
          reverse(arr[i].begin(), arr[i].end());
        }

        for(int i = 0; i < n; i++){
          for(int j = 0; j < arr[0].size(); j++){
            if(arr[i][j] == 1){
              arr[i][j] = 0;
            }
            else{
              arr[i][j] = 1;
            }
          }
        }
        return arr;
    }
};
class Solution {
public:

   vector<int> getleftMax(vector<int> &height, int &n){
    vector<int>left_max(n);

     left_max[0] = height[0];

    for(int i = 1; i < n; i++){
         left_max[i] = max(left_max[i - 1], height[i]);
    }

    return left_max;
   }

     vector<int> getrightMax(vector<int> &height, int &n){
           vector<int>right_max(n);

           right_max[n - 1] = height[n - 1];

           for(int i = n - 2; i >= 0; i--){
            right_max[i] = max(right_max[i + 1], height[i]);
           }
           return right_max;
     }
    int trap(vector<int>& height) {
        int n = height.size();
       
        if(n == 0){
            return 0;
        }

        vector<int>left_max = getleftMax(height, n);
        vector<int>right_max = getrightMax(height, n);

        int total_water = 0;
           

           for(int i = 0; i < n; i++){
            total_water +=  min(left_max[i], right_max[i]) - height[i];
           }

           return total_water;
    }
};
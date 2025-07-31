class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        int totalSum = 0;
        int C_sum = 0;
        for(int i = n - 1; i >= 0; i--){
            C_sum += satisfaction[i];
            if(C_sum > 0){
                totalSum += C_sum;
            }
            else{
                break;
            }
        }
           return totalSum;
    }
};
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_income = accumulate(begin(gas), end(gas), 0);
        int total_expenditure = accumulate(begin(cost), end(cost), 0);
        if(total_income < total_expenditure){
            return -1;
        }
          int total = 0, result_index = 0;
        for(int i = 0; i < gas.size(); i++){
            total += gas[i] - cost[i];

            if(total < 0){
                result_index = i + 1;
                total = 0;

            }
        }
        return result_index;
    }
};
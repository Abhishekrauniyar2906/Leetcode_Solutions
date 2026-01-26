class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        
        if(cost.size() == 1){
          return  cost[0];
        }
        if(cost.size() == 2){ 
          return cost[0] + cost[1];
        }

        int candy_cost_sum = 0;

        for(int i = cost.size() - 1; i >= 0; i -= 3){
         
          candy_cost_sum +=  cost[i];
          if(i - 1 >= 0){
            candy_cost_sum += cost[i - 1];
          }
          
        }
        return candy_cost_sum;
    }
};
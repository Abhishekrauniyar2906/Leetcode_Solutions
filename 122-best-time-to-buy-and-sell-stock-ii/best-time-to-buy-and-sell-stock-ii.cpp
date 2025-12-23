class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     logic : agar aaj ka price kam hein kal ke price se it means aaj buy kar lo kal sell kar dena  yhi logic hein
    // jaise ki 5 ke lie aaj price jayda hein kal se koi mtlb nhi buy karne ka skip and for 3
    // 3 < 6 means 3 buy today and sell tommorrow profit will be 3
         int profit = 0;

         for(int i = 0; i < prices.size() - 1; i++){
          if(prices[i + 1] > prices[i]){
            profit += prices[i + 1] - prices[i];
          }
         }

         return profit;
    }
};
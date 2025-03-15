class Solution {
public:
    int findTheWinner(int n, int k) {
        
        //  all palyers should go into a queue
        queue<int>q;

        for(int i = 1; i <= n; i++){

             q.push(i);
        }

        while(q.size() != 1){
            // Simualte the game 
            for(int i = 1; i < k; i++){
            int player = q.front();
            q.pop();
            // it is not eliminated yet
            q.push(player);
        }
        // kth player must be eliminated
        q.pop();
        }
        // winner
        return q.front(); 
    }
};
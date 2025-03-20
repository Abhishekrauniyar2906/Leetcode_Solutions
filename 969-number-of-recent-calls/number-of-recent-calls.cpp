class RecentCounter {
public:

   queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        // push the element in queue
        q.push(t);


        while(!q.empty() && q.front() < (t - 3000)){
            q.pop();
            
        }
        return q.size();
    }
};


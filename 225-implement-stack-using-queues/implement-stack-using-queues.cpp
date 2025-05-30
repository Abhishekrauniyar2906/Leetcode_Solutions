class MyStack {
public:
       queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {

        q.push(x);
        for(int i = 0; i < q.size() - 1; i++){
            int front = q.front();
             q.pop();
             q.push(front);
        }
    }
    
    int pop() {
        int remove = q.front();
        q.pop();
        return remove;
    }
    
    int top() {
         return q.front();
    }
    
    bool empty() {  
        return q.empty() ? true : false; 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
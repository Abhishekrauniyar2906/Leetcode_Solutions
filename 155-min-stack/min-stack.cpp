class MinStack {
public:
    
    vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int value) {
       if(st.empty()){
        pair<int,int> p;
        p.first = value;
        p.second = value;
        st.push_back(p);
       }
       else{
        pair<int,int> p;
        p.first = value;
        int oldvalue = st.back().second;
        int newValue = min(oldvalue, value);
        p.second = newValue;
        st.push_back(p);
       }
        
    }
    
    void pop() {
      return st.pop_back();
    }
    
    int top() {
      pair<int,int>rightmostpair = st.back();
      return rightmostpair.first;
    }
    
    int getMin() {
         pair<int,int>rightmostpair = st.back();
      return rightmostpair.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
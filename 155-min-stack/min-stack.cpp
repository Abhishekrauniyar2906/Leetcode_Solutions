class MinStack {
public:

     vector<pair<int,int>> st;
    MinStack() {
        // No need to define any value
    }
    
    void push(int val) {
        // No overflow conditoins right here , because of vector
        if(st.empty()){
            pair<int,int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
              pair<int,int> p;
            p.first = val;
            int oldValue = st.back().second;
            int newValue = min(oldValue, val);
            p.second = newValue;
            st.push_back(p);
        }
    }
    
    void pop() {
        return st.pop_back();
    }
    
    int top() {
        pair<int,int> rightMostpair = st.back();
        return rightMostpair.first;
    }
    
    int getMin() {
        pair<int,int>rightMostpair = st.back();
        return rightMostpair.second;

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
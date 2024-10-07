class Solution {
public:
    int minLength(string s) {
  stack<char> st;

        for(auto e: s){
            if(!st.empty() && ((st.top()=='A' && e == 'B')
                               || (st.top()=='C' && e == 'D'))){
                st.pop();

            }else{
                st.push(e);
            }
            
        }

        return st.size();

    }
};
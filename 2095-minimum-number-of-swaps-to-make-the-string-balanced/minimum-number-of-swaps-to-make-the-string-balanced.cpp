class Solution {
public:
    int minSwaps(string s) {
      
        stack<char> st;
        
        
        for(auto ch : s){
            if(ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
        }

             int unbalancedcount = st.size() / 2;
             return (unbalancedcount + 1) / 2;
    }
};
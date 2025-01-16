class Solution {
public:
    int minAddToMakeValid(string s) {

         stack<char> st;
        
          int count = 0;
         
        for(auto ch : s){
            if(ch == '('){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                     count++;
                }
            }
        }
        
        count += st.size();
             
        return count;
    }
};
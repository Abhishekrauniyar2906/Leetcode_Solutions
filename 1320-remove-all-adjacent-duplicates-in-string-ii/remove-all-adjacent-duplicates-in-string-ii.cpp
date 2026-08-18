class Solution {
public:
    string removeDuplicates(string s, int k) {
     stack<pair<char,int>>st;
     string ans = "";

     for(auto ch : s){
        if(!st.empty() && st.top().first == ch){
            st.top().second++;

            if(st.top().second == k){
                st.pop();
            }
            
        }
        else{
             st.push({ch, 1});
        }
       
     }   
      while(!st.empty()){
        ans.append(st.top().second, st.top().first);
        st.pop();
      }
      
      reverse(ans.begin(), ans.end());
      return ans; 
    }
};
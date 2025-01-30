class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;

        int i = 0;
        while(i < path.size()){
            int start = i;
            int end = i + 1;
            while(end < path.size() && path[end] != '/'){
                ++end;
            }
            i = end;

            string minpath = path.substr(start, end - start);
            if(minpath == "/" || minpath == "/."){
                continue;
            }
             if(minpath == "/.." ){
                if(!st.empty())
                  st.pop();
            }
            else{
                
                st.push(minpath);
            }
        }
          vector<string>temp;
          while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
          }
          reverse(temp.begin(), temp.end());
        string ans = "";

        for(auto ch : temp){
            ans += ch;
        }
        return ans.empty() ? "/" : ans;
    }
};
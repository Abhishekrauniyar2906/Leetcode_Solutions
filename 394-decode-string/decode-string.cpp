class Solution {
public:
    string decodeString(string s) {
        stack<string>st;

        for(auto ch : s){
            if(ch == ']'){
                // Perform the action
                string stringtoRepeat = "";

                while(!st.empty() && st.top() !="["){
                    string top = st.top();
                    stringtoRepeat += top;
                    st.pop();
                }
                st.pop();
                   string numericNumber = "";
                while(!st.empty() && isdigit(st.top()[0])){
                     numericNumber += st.top();
                     st.pop();
                }
                   reverse(numericNumber.begin(), numericNumber.end());
                   int n = stoi(numericNumber);

                //    final decoding

                     string currentDecode = "";

                     while(n--){
                        currentDecode += stringtoRepeat;
                     }
                      st.push(currentDecode);
                          }
                            else{
                                
                                  string temp(1,ch);
                                   st.push(temp);
            }
        }

            string ans;

            while(!st.empty()){
                ans += st.top();
                st.pop();
            }

            reverse(ans.begin(), ans.end());
            return ans;
    }
};
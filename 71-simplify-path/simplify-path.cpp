class Solution {
public:

    void buildAns(stack<string>& st, string &ans) {
        if (st.empty()) {
            return;
        }
        string minpath = st.top();
        st.pop();
        buildAns(st, ans);
        ans += minpath;
    }

    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;

        while (i < path.size()) {
            int start = i;
            int end = i + 1;

            // Find the next segment of the path
            while (end < path.size() && path[end] != '/') {
                ++end;
            }

            string minpath = path.substr(start, end - start);
            i = end;

            if (minpath == "/" || minpath == "/.") {
                continue;  // Skip redundant slashes or current directory
            }

            if (minpath == "/..") {
                if (!st.empty()) {
                    st.pop();  // Pop the top directory
                }
            } else if (minpath != "/") {
                st.push(minpath);  // Push valid directories onto the stack
            }
        }

        string ans = st.empty() ? "/" : "";
        buildAns(st, ans);
        return ans;
    }
};

class Solution {
public:

    vector<int> nextSmallerElement(vector<int> &heights){
        stack<int> st;
        st.push(-1);
        vector<int> ans(heights.size()); // Initialize vector size
        for (int i = heights.size() - 1; i >= 0; i--) {
            while (st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> &heights){
        stack<int> st;
        st.push(-1);
        vector<int> ans(heights.size()); // Initialize vector size
        for (int i = 0; i < heights.size(); i++) {
            while (st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextSmallerElement(heights);
        vector<int> prev = prevSmallerElement(heights);

        for (int i = 0; i < heights.size(); i++) {
            if (next[i] == -1) {
                next[i] = heights.size();
            }
        }

        int maxi = 0;

        for (int i = 0; i < heights.size(); i++) {
            int width = next[i] - prev[i] - 1;
            int length = heights[i];
            maxi = max(maxi, width * length);
        }

        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> heights(m, 0);
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};

class Solution {
public:
   
    vector<int> nextsmallerElement(vector<int> &heights) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(heights.size());
        for (int i = heights.size() - 1; i >= 0; i--) {
            int curr = heights[i];
            while (st.top() != -1 && heights[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevsmallerElement(vector<int> &heights) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(heights.size());
        for (int i = 0; i <= heights.size() - 1; i++) {
            int curr = heights[i];
            while (st.top() != -1 && heights[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> leftans = prevsmallerElement(heights);
        vector<int> rightans = nextsmallerElement(heights);

        for (int i = 0; i < heights.size(); i++) {
            if (rightans[i] == -1) {
                rightans[i] = heights.size();
            }
        }
        
        vector<int> area(heights.size());
        for (int i = 0; i < heights.size(); i++) {
            int width = rightans[i] - leftans[i] - 1;
            int length = heights[i];
            area[i] = width * length;
        }

        int maxi = INT_MIN;
        for (int i = 0; i < area.size(); i++) {
            maxi = max(maxi, area[i]);
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) {
            return 0;
        }

        int n = matrix.size();
        int m = matrix[0].size();
        int maxArea = 0;
        vector<int> heights(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') {
                    heights[j] += 1; // Increase the height if it's '1'
                } else {
                    heights[j] = 0; // Reset the height if it's '0'
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights)); // Calculate max area after each row update
        }
        return maxArea; // Return the maximum area found
    }
};

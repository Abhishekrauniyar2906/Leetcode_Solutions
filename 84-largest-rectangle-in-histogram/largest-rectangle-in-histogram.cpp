class Solution {
public:

     vector<int> nextSmallerElement(vector<int> &heights){
        stack<int>st;
        st.push(-1);
         vector<int> ans(heights.size());
        for(int i = heights.size() - 1; i >= 0; i--){
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

     vector<int> prevSmallerElement(vector<int> &heights){
        stack<int>st;
        st.push(-1);
         vector<int> ans(heights.size());
        for(int i = 0; i < heights.size();  i++){
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
       vector<int>left = prevSmallerElement(heights);
       vector<int>right = nextSmallerElement(heights);

       for(int i = 0; i < heights.size(); i++){
        if(right[i] == -1){
            right[i] = heights.size();
        }
       } 
        vector<int>area(heights.size());
       for(int i = 0; i < heights.size(); i++){
        int width = right[i] - left[i] - 1;
         area[i] = heights[i] * width;
       }
        int maxi = INT_MIN;
       for(int i = 0; i < area.size(); i++){
        maxi = max(maxi, area[i]);
       }

       return maxi;
    }
};
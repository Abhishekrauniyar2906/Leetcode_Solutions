class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
               int n = nums.size();
            // Initially answer array -1 se bhara hua (agar next greater na mile toh default -1 hi rahe)

        vector<int>ans(n, -1);
        stack<int>st;
        

        for(int i = 2 * n - 1; i >= 0; i--){
                  // Circular index - i kitna bhi bada ho, % n use karke 0 to n-1 range me laa lenge

          int idx = i % n;
           /*
        🔥 KEY UNDERSTANDING:
        Hum array ko circular feel karwana chahte hain.
        Isliye loop 2*n baar chalega (pura array 2 times process)
        
        👉 First round: (i >= n)
            - Yaha hum sirf STACK PREPARE kar rahe hain.
            - Answer array ko fill nahi karte!!!
            
        👉 Second round: (i < n)
            - Yaha hum actual ans[] fill karte hain.
            - Stack ke top se answer milta hai.
    */
          while(!st.empty() && st.top() <= nums[idx]){
            st.pop();         
          }

          if(i < n ){
            ans[idx] = st.empty() ? -1 : st.top();
          }
          st.push(nums[idx]);
        }
        return ans;
    }
};
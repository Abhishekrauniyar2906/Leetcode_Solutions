class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        // Iterate through each asteroid
        for (auto ast : asteroids) {
            bool destroy = false;

            // Case when the asteroid is moving to the right or stack is empty
            if (st.empty() || ast > 0) {
                st.push(ast);
            } else {
                // Case when the asteroid is moving to the left (negative)
                while (!st.empty() && st.top() > 0) {
                    // If the absolute value of the asteroid is equal to the top of the stack, both are destroyed
                    if (abs(ast) == st.top()) {
                        destroy = true;
                        st.pop();
                        break;
                    }
                    // If the absolute value of the asteroid is greater than the top of the stack, the top asteroid is destroyed
                    else if (abs(ast) > st.top()) {
                        st.pop();
                    }
                    // If the absolute value of the asteroid is smaller, it gets destroyed
                    else {
                        destroy = true;
                        break;
                    }
                }
                // If the asteroid wasn't destroyed, add it to the stack
                if (!destroy) {
                    st.push(ast);
                }
            }
        }

        // Now, we need to create a result vector from the stack
        vector<int> ans(st.size());
        // Pop all elements from the stack and store them in the result vector
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};










































































































































































// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//        stack<int>st;
//        for(auto ast : asteroids){
//         bool destroy = false;
//         if(ast > 0){
//             st.push(ast);
//         }

//         else{
//             //   -ve
//               if(st.empty() || st.top() < 0){
//                 st.push(ast);
//               }
//               else{
//                 // colliosion

//                  while(!st.empty() && st.top() > 0){
//                     if(abs(ast) == st.top()){
//                         destroy = true;
//                         st.pop();
//                         break;
//                     }
//                     else if(abs(ast) > st.top()){
//                         st.pop();
//                     }
//                     else{
//                         destroy = true;
//                         break;
//                     }
//                  }
//                  if(!destroy){
//                     st.push(ast);
//                  }
//               }
//         }
//        } 

//        vector<int>ans(st.size());
//        for(int i = st.size() - 1; i >= 0; i--){
//         ans[i] = st.top();
//         st.pop(); 
//        }

//        return ans;
//     }
// };
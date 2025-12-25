class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area = 0;

        int left = 0;
        int right = height.size() - 1;

        int maxWater = INT_MIN;

        while(left < right){
          // yha pe pehle min height find karke check kar rahe hein ki paani yha pe ruk raha hein ya nahi
          int minHeight = min(height[left], height[right]);
          int width = right - left;
          Area = minHeight * width;
          
        // ab yha pe maxwater nikal liye hein
          maxWater = max(maxWater, Area);
          
          //imp point ab agar badi height ko move karenge toh koi mtlb nahi hoga badi height
          // toh wha tk paani store kar legi but small height kitna store karegi yeah find
          // karan hein max water of height * width
          if(height[left] < height[right]){
            left++;
          }
          else{
            right--;
          }
        }
        return maxWater;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long max_Area = 0;

        int i = 0;
        int j = height.size() - 1;

        while(i < j){
            int h = min(height[i], height[j]);
            int width = j - i;

            long long area = 1LL * h * width;
            max_Area = max(max_Area, area);

            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }

            
        }
        return (int)max_Area;
    }
};
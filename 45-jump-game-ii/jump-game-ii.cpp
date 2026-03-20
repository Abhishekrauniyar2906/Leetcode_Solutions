class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int f = 0;
        int j = 0;

        while(r < nums.size() - 1){
          for(int i = l; i <= r; i++){
            f = max(f, i + nums[i]);
          }
          l = r;
          r = f;
          j++;
        }
        return j;
    }
};
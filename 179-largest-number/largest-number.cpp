class Solution {
public:
    struct Comp{
      bool operator()(string &a, string &b){
        return a + b > b + a;
      }
    };
    string largestNumber(vector<int>& nums) {
      vector<string>arr;
        for(int i = 0; i < nums.size(); i++){
           arr.push_back(to_string(nums[i]));
        }

        sort(arr.begin(), arr.end(), Comp());

        if(arr[0] == "0"){
          return "0";
        }
         string ans = "";
        for(auto num : arr){
          ans += num;
        }

        return ans;
    }
};
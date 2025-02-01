class Solution {
public:
  
  void combination_Sum(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &v, int index){
     if(target < 0){
          return;
     }
    if(target == 0){
          ans.push_back(v);
    }
    
    for(int i = index;  i < candidates.size(); i++){
       v.push_back(candidates[i]);
  //why we will not increment i becasue we will take 2 again and again until v taregt
      combination_Sum(candidates, target - candidates[i], ans, v, i);
      v.pop_back();
    }
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
      combination_Sum(candidates, target, ans, v, 0);
      return ans;
    }
};
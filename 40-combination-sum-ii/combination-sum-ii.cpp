class Solution {
public:

  void solve(vector<int>& candidates, int target, int index,  vector<int>&ans, set<vector<int>>&unique){
    if(target < 0){
      return;
    }

    if(target == 0){
      unique.insert(ans);
      return;
    }

    for(int i = index; i < candidates.size(); i++){
      if(i > index && candidates[i] == candidates[i-1]) continue;
      if(candidates[i] > target){
        break;
      }

      ans.push_back(candidates[i]);
      solve(candidates, target - candidates[i], i + 1, ans, unique); // why i + 1, skipping duplicate elements
      ans.pop_back(); 
    }
  }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      sort(candidates.begin(), candidates.end());
        set<vector<int>>unique;

      vector<int>ans;

      solve(candidates, target, 0, ans, unique);

      vector<vector<int>>result(unique.begin(), unique.end());
      return result;

      
    }
};
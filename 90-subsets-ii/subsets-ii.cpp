class Solution {
public:
    void subset(vector<int>& nums, int index, vector<int>& output, set<vector<int>>& ans) {
        if(index >= nums.size()) {
            ans.insert(output);
            return;
        }

        // Exclude the current element
        subset(nums, index + 1, output, ans);

        // Include the current element
        output.push_back(nums[index]);
        subset(nums, index + 1, output, ans);

        // Backtrack
        output.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Important to handle duplicates
        set<vector<int>> ans;
        vector<int> output;

        subset(nums, 0, output, ans);

        // Convert set to vector
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }
};

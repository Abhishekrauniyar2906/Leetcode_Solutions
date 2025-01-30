class Solution {
public:

  
    void backtrack(string &digits, int index, string &current, vector<string> &result, vector<string> &mapping) {
        if (index >= digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '2'];  // Get letters for current digit
        for (char ch : letters) {
            current.push_back(ch);   // Choose
            backtrack(digits, index + 1, current, result, mapping);  // Explore
            current.pop_back();  // Backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return vector<string>{};  // Fix: Return empty vector

        vector<string> mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        string current = "";
        backtrack(digits, 0, current, result, mapping);
        return result;
    }
};




    
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
           vector<vector<string>>ans;
           unordered_map<string, vector<string>>mp;

           for(auto ch : strs){
            string s = ch;
            sort(s.begin(), s.end());
            mp[s].push_back(ch);
           }

           for(auto it : mp){
            ans.push_back(it.second);
           }
           return ans;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, int> mp;
    unordered_map<char, int> m;

    for (auto ch : s) {
        mp[ch]++;
    }

    for (auto ch : t) {
        m[ch]++;
    }

    // Compare the two maps
    return mp == m;
    }
};
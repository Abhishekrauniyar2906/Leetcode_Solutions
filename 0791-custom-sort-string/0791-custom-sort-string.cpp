class Solution {
public:
    static string str;
  static bool compare(char str1, char str2){
        return (str.find(str1) < str.find(str2));
    }
    string customSortString(string order, string s) {
        str = order;
        
        sort(s.begin(), s.end(), compare);
        return s;
    }
};
string Solution::str;
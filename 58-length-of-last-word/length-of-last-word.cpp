class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        while(i >= 0 && s[i] == ' '){
            s.pop_back();
            i--;
        }

        i = s.size() - 1;
        int count = 0;

        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }
          return count;
    }
};
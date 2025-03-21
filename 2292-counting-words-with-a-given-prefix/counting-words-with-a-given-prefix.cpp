class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
           int preflen = pref.size();
        for(const auto& word : words){
            if(word.rfind(pref, 0) == 0){
                count++;
            }
        }
        return count;
    }
};
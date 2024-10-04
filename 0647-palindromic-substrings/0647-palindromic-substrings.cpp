class Solution {
public:
    
    int expand(string &s, int i,int j){
        int count = 0;
        while(i >=0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;
        
        for(int i = 0; i < s.size(); i++){
            // odd case
            int j = i ;
            
            int oddAns = expand(s, i, j);
            
//             Even case
            j = i + 1;
            int evenAns = expand(s, i, j);
            totalCount += oddAns + evenAns;
        }
        return totalCount;
    }
};
class Solution {
public:
    int findContentChildren(vector<int>& a, vector<int>& s) {
        sort(a.begin(), a.end());
        sort(s.begin(), s.end());


        int i = 0;
        int j = 0;
        int count = 0;
        while(i < a.size() && j < s.size()){
            if(a[i] <= s[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return count;
    }
};
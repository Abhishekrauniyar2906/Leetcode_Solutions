class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
     vector<string>ans;
        int j=0;
        int i=1;
        while(j!=target.size())
        {
            ans.push_back("Push");

            if(i==target[j])
            {
                
                j++;
                
            }
            else
            {
                ans.push_back("Pop");
            }
            i++;


        }


     return ans;

    }
};
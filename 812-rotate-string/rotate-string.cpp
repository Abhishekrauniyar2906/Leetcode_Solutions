class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
          return false;
        }
            string dobuled = s + s;

            while(dobuled.find(goal) != string::npos){
              return true;
            }

            return false;
    }
};
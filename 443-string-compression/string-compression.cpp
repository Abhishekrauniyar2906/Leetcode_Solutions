class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;

        while(i < chars.size()){
          int j = i + 1;

          while(j < chars.size() && chars[i] == chars[j]){
            j++;
          }

          chars[ansIndex++] = chars[i];
          int count = j - i;
          if(count > 1){
            string ct = to_string(count);

            for(auto ch : ct){
              chars[ansIndex++] = ch;
            }
          } 
            i = j;
        }

        return ansIndex;
    }
};
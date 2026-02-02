class Solution {
public:
    bool checkInclusion(string p, string s) {
        //  vector<int>ans; // to store the indices of first index of anagram 
        unordered_map<char,int>pMap;
        unordered_map<char,int>sMap;

        for(auto ch : p){
          pMap[ch]++;
        }
        int count = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++){
          sMap[s[right]]++;
        // p char is map to the s char of their freq it means count the value 
          if(sMap[s[right]] <= pMap[s[right]]){
            count++;
          }

          // suppose by chance if move the to the right side if current window 
          // is greater than p size we have to do someting in this case, why p length is < s
          // and we have to check only p length freq with substring exist or not in s

          if(right - left + 1 > p.size()){
            //suppose if cbae if we move cbae and cba is valid and right move e then we lost 
            // a so we have to check this condition

            if(sMap[s[left]] <= pMap[s[left]]){
               count--; //why because we lost a here and move to e that why count will be decrement
            }
            sMap[s[left]]--;
            left++;
          }
          
          if(count == p.size()){
            return true;
          }

        }
        return false;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(char c : s) {
            hash[c - 'a']++;
        }
        
        char max_freq_char;
        int max_freq = 0;
        int n = s.size();
        for(int i = 0; i < 26; i++) {
            if(hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
        
        if(max_freq > (n + 1) / 2) {
            return "";
        }
        
        string result(n, ' ');
        int index = 0;
        
        while(max_freq > 0) {
            result[index] = max_freq_char;
            index += 2;
            max_freq--;
        }
        
        hash[max_freq_char - 'a'] = 0;
        
        for(int i = 0; i < 26; i++) {
            while(hash[i] > 0) {
                if(index >= n) {
                    index = 1;
                }
                result[index] = i + 'a';
                index += 2;
                hash[i]--;
            }
        }
        
        return result;
    }
};

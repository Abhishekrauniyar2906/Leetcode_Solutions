class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> result(n, 0);  
        sort(deck.begin(), deck.end());
        
        int i = 0;  // deck index
        int j = 0;  // result index
        bool skip = false;

        while (i < n) {
            if (result[j] == 0) {
                if (!skip) {
                    result[j] = deck[i];
                    i++;
                }
                skip = !skip;
            }
            j = (j + 1) % n;
        }

        return result;
    }
};

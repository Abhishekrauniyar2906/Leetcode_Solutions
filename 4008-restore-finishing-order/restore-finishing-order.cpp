class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friendsSet(friends.begin(), friends.end());

    vector<int> result;

   
    for (int x : order) {
        if (friendsSet.count(x)) {
            result.push_back(x);
        }
    }
    return result;
    }
};
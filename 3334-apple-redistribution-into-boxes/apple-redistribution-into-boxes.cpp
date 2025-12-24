class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appleSum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.rbegin(), capacity.rend());
        int count = 0;
        
        int capacitySum = 0;
       for(int i = 0; i < capacity.size(); i++){
        capacitySum += capacity[i];  // ek box ki capacity add hui
        count++;                     // iska matlab: ek box use ho gaya

        if(capacitySum >= appleSum){
          break;
        }
       }
       return count;
    }
};
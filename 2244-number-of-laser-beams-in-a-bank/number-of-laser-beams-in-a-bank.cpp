class Solution {
public:
    // Helper function to count number of '1's in a row
    int solve(const string &row) {
        int count = 0;
        for (char ch : row) {
            if (ch == '1') {
                count++;
            }
        }
        return count;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int> deviceCount;

        // Step 1: Count devices in each row and only store rows with at least one device
        for (const auto &row : bank) {
        deviceCount.push_back(solve(row));
            
        }

      
        int totalBeams = 0;
       for(int i = 0; i < deviceCount.size() - 1; i++){
        int j = i + 1;
         
         while(j < deviceCount.size()){
          totalBeams += deviceCount[i] * deviceCount[j];
          if(deviceCount[j] == 0) j++;
          else 
          break;
         }
        
       }
        return totalBeams;
    }
};

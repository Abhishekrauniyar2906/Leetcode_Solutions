class Solution {
public:
    int countdevices(string &binary){
        
        int c = 0;
        for(auto b:binary)
            c += b - '0';
            return c;
        }
    
    int numberOfBeams(vector<string>& bank) {
      vector<int>devices;
        
        for(auto row:bank){
            devices.push_back(countdevices(row));
        }
        int beams = 0;
        
        for(int i = 0; i <devices.size(); i++){
            
            int j = i + 1;
            while(j < devices.size()){
                beams +=  devices[i] * devices[j];
                if(devices[j] == 0){
                  j++;
                }
                else{
                    break;
                }
            }
        }
        return beams;
    }
};
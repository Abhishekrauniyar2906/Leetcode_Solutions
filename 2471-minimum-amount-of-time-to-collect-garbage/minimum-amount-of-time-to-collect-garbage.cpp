class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTime = 0;
        int lastM = 0, lastP = 0, lastG = 0;
        vector<int>travelPrefix(travel.size() + 1, 0);

        for(int i = 0; i < travel.size(); i++){
          travelPrefix[i + 1] = travelPrefix[i] + travel[i];
        }
        
        for(int i = 0; i < garbage.size(); i++){
         for(auto ch : garbage[i]){
          totalTime++;
          if(ch == 'M') lastM = i;
          if(ch == 'P') lastP = i;
          if(ch == 'G') lastG = i;
          
         

         }
        }

        totalTime += travelPrefix[lastM];
        totalTime += travelPrefix[lastP];
        totalTime += travelPrefix[lastG];

        return totalTime;

    }
};
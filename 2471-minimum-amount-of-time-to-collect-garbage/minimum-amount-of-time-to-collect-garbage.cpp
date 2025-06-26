class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalTime = 0;
        int lastM = 0, lastP = 0, lastG = 0;
        
        for(int i = 0; i < garbage.size(); i++){
         for(auto ch : garbage[i]){
         
          if(ch == 'M') lastM = i;
          if(ch == 'P') lastP = i;
          if(ch == 'G') lastG = i;
           totalTime++;
         

         }
        }

        for(int i = 0; i < travel.size(); i++){
          if(i < lastM) totalTime += travel[i];
          if(i < lastP) totalTime += travel[i];
          if(i < lastG) totalTime += travel[i];
        }

        return totalTime;

    }
};
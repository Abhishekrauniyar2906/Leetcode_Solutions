class Solution {
public: 

   int leftSum(string moves){
     int leftCount = 0;
        int rightCount = 0;

        for(int i = 0; i < moves.size(); i++){
          if(moves[i] == 'L' || moves[i] == '_'){
           leftCount++;
          }
          else{
            rightCount++;
          }
        }
      //  cout <<"leftCount for left Sum : " << leftCount << endl;
      //  cout <<"rightCount for leftSum : " << rightCount << endl;
      //  cout <<"abs for left : " << abs(leftCount - rightCount) << endl;
       return abs(leftCount - rightCount);
        
   }

    int rightSum(string &moves){
       int leftCount = 0;
        int rightCount = 0;

        for(int i = 0; i < moves.size(); i++){
          if(moves[i] == 'R' || moves[i] == '_'){
            rightCount++;
          }
          else{
            leftCount++;
          }
        }
      //   cout <<"leftCount for right Sum : " << leftCount << endl;
      //  cout <<"rightCount for rightSum : " << rightCount << endl;
      //  cout <<"abs for right : " << abs(leftCount - rightCount) << endl;
       return abs(leftCount - rightCount);
        
    }
    int furthestDistanceFromOrigin(string moves) {
       int left = leftSum(moves);
       int right = rightSum(moves);
       return max(left, right);

    }
};
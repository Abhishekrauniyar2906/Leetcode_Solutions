class Info{
  public:
  char c;
  int count;

  Info(char c, int count){
    this -> c = c;
    this -> count = count;
  }
};

struct Compare{
  
  bool operator()(Info a, Info b){
    return a.count < b.count;
  }
};

class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26, 0);
        
        priority_queue<Info, vector<Info>, Compare>maxHeap;
        for(auto ch : s){
          freq[ch - 'a']++;
        }

        for(int i = 0; i < 26; i++){
          if(freq[i] > 0){
          Info temp(i + 'a', freq[i]);
          maxHeap.push(temp);
          }
       }
          
          string ans = "";
         while(maxHeap.size() > 1){

          Info first = maxHeap.top();
          maxHeap.pop();

          Info second = maxHeap.top();
          maxHeap.pop();
           
          ans.push_back(first.c);
          first.count--; 

          ans.push_back(second.c);
          second.count--;
           
           if(first.count > 0){
            maxHeap.push(first);
           }

           if(second.count > 0){
            maxHeap.push(second);
           }
         } 
     
          if(maxHeap.size() == 1){
            Info first = maxHeap.top();
            maxHeap.pop();
            ans.push_back(first.c);
            first.count--;


            if(first.count != 0){
              return "";
            }
          }
     

         return ans;
    }
};
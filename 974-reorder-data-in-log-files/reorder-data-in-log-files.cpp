class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {

        vector<string>digitLogs;
        vector<string>letterLogs;

        for(auto log : logs){
          int pos = log.find(' ');
          string content = log.substr(pos + 1);

          if(isdigit(content[0])){
            digitLogs.push_back(log);
          }
          else{
            letterLogs.push_back(log);
          }
        }
        
        sort(letterLogs.begin(), letterLogs.end(), [](string &a, string &b){
          int posA = a.find(' ');
          int posB = b.find(' ');


          string identifierA = a.substr(0, posA);
          string contentA = a.substr(posA + 1);

          string identifierB = b.substr(0, posB);
          string contentB = b.substr(posB + 1);

          if(contentA == contentB)
            return identifierA < identifierB;
            return contentA < contentB;
          
        });

        letterLogs.insert(letterLogs.end(), digitLogs.begin(), digitLogs.end());
         
         return letterLogs;

        
    }
};
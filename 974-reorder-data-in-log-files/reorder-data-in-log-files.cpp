class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
     vector<string> digitsLogs;
     vector<string> lettersLogs;

     for(auto log : logs){
      int pos = log.find(' ');
      string content = log.substr(pos + 1);

      if(isdigit(content[0])){
        digitsLogs.push_back(log);
      }
      else{
        lettersLogs.push_back(log);
      }
     }

     sort(lettersLogs.begin(), lettersLogs.end(), [](string &a, string &b){
       int posA = a.find(' ');
       int posB = b.find(' ');

       string identifierA = a.substr(0, posA);
       string contentA = a.substr(posA + 1);

       string identifierB = b.substr(0, posB);
       string contentB = b.substr(posB + 1);

       if(contentA == contentB){
        return identifierA < identifierB;
       }
       else{
        return contentA < contentB;
       }
     });   

     lettersLogs.insert(lettersLogs.end(), digitsLogs.begin(), digitsLogs.end());

     return lettersLogs;
    }
};
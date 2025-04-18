class Solution {
public:
  
   void removeRE(string &s, string &part){
       
     int found  = s.find(part);
     if(found != string::npos){
       string left = s.substr(0, found);
       string right = s.substr(found + part.size(), s.size());
       s = left + right;
       removeRE(s, part);
       
     }
     else{
       return;
     }
   }
  
    string removeOccurrences(string s, string part) {
       removeRE(s, part);
      return s;
    }
};
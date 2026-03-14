class Solution {
  public:
  bool isvalid(string &s){
      if(s.size()>1 && s[0]=='0'){
          return false;
      }
      int val=stoi(s);
      return val<=255;
  }
  void gen(string &s,int ind,string curr,int cnt,vector<string>&res){
      if(ind>=s.size()){
          return ;
      }
      if(cnt==3){
          string last=s.substr(ind);
          if(last.size()<=3 && isvalid(last)){
              res.push_back(curr+last);
          }
          return;
      }
      string segment="";
      
      for(int i=ind;i<min(ind+3,(int)s.size());i++){
          segment+=s[i];
          if(isvalid(segment)){
              gen(s,i+1,curr+segment+".",cnt+1,res);
          }
      }
      return;
      
      
  }
    vector<string> generateIp(string &s) {
        // code here
        vector<string>res;
        gen(s,0,"",0,res);
        return res;
    }
};
class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
      unordered_map<char,int>mpp;
      queue<char>q;
      string res="";
      for(int i=0;i<s.size();i++){
          q.push(s[i]);
          mpp[s[i]]++;
       while( !q.empty() && mpp[q.front()]>1){
           q.pop();
       }
       if(q.empty()){
           res.push_back('#');
       }else{
           res.push_back(q.front());
       }
         
          
      }
      return res;
        
    }
};
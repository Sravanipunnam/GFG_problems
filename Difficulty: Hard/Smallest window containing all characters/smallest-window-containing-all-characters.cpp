class Solution {
  public:
  bool isgood(vector<int>&ans,vector<int>&prev){
      for(int i=0;i<26;i++){
          if(ans[i]<prev[i]) return false;
      }
      return true;
  }
  
    string minWindow(string &s, string &p) {
        // code here
        vector<int>ans(26,0);
        vector<int>prev(26,0);
        for(int i=0;i<p.size();i++){
            prev[p[i]-'a']++;
        }
        int i=0,j=0;
        int ii=-1,ij=-1;
        int res=INT_MAX;
        int n=s.size();
        while(j<n){
            ans[s[j]-'a']++;
            while(isgood(ans,prev)){
                if(res>j-i+1){
                    res=j-i+1;
                    ii=i;
                    ij=j;
                }
                ans[s[i]-'a']--;
                i++;
            }
            j++;
           
            
        }
         if(ii==-1 && ij==-1) return "";
        return s.substr(ii,ij-ii+1);
        

    }
};
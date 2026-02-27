class Solution {
  public:
  int sum(vector<vector<int>>&pref,int k,int x,int n,int m){
      int count=0;
      for(int i=0;i<=n-k;i++){
          for(int j=0;j<=m-k;j++){
              int ans=pref[i+k][j+k]-pref[i+k][j]-pref[i][j+k]+pref[i][j];
              if(ans==x){
                  count++;
              }
          }
      }
      return count;
      
  }
    int countSquare(vector<vector<int>>& mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>pref(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pref[i][j]=pref[i][j-1]+pref[i-1][j]-pref[i-1][j-1]+mat[i-1][j-1];
            }
        }
        int count=0;
        for(int i=1;i<=n;i++){
            count+=sum(pref,i,x,n,m);
        }
        return count;
        
    }
};
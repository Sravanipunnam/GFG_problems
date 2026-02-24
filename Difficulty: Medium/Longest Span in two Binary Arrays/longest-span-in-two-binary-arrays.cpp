class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n=a1.size();
      vector<int>pre(n);
      pre[0]=a1[0]-a2[0];
      for(int i=1;i<n;i++){
          pre[i]=pre[i-1]+(a1[i]-a2[i]);
          
      }
      int ans=0;
      unordered_map<int,int>mpp;
      mpp[0]=-1;
      for(int i=0;i<n;i++){
          if(mpp.find(pre[i])!=mpp.end()){
              ans=max(ans,i-mpp[pre[i]]);
          }
          else{
              mpp[pre[i]]=i;
          }
      }
       return ans; 
    }
};
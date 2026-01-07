class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        int j,count,ans=0;
        vector<int>res;
        int n=arr.size();
      for(int i=0;i<k;i++){
          if(mp[arr[i]]==0){
              ans++;
          }
          mp[arr[i]]++;
      }
      res.push_back(ans);
      for(int i=k;i<arr.size();i++){
           if(mp[arr[i-k]]==1){
             ans--;
         }
          mp[arr[i-k]]--;
        
          if(mp[arr[i]]==0){
              ans++;
          }
          mp[arr[i]]++;
          res.push_back(ans);
          
      }
      return res;
        
    }
};
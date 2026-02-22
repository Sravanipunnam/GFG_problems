class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int pref=0;
        int res=0;
      unordered_map<int,int>mpp;
      for(int i=0;i<arr.size();i++){
          pref=pref^arr[i];
          res+=mpp[pref^k];
          if(pref==k){
              res++;
          }
        mpp[pref]++;
      }
      return res;
    }
};
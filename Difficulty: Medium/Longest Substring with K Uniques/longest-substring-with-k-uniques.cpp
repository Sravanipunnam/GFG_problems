class Solution {
  public:
    int longestKSubstr(string &arr, int k) {
        // code here
        int i=0,j=0;
        int n=arr.size();
        unordered_map<int,int>mpp;
        int maxi=-1;
        while(j<n){
           mpp[arr[j]]++;
           while(mpp.size()>k){
               mpp[arr[i]]--;
               if(mpp[arr[i]]==0){
                   mpp.erase(arr[i]);
               }
               i++;
           }
           if(mpp.size()==k){
               maxi=max(maxi,j-i+1);
           }
           j++;
        }
        return maxi;
        
    }
};
class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int i=0;
        int n=arr.size();
        int maxxor=0;
       for(int i=0;i<k;i++){
           maxxor^=arr[i];
       }
       int maxi=maxxor;
       for(int i=k;i<n;i++){
          
           maxxor^=arr[i-k];
           maxxor^=arr[i];
            maxi=max(maxi,maxxor);
           
       }
       return maxi;
    }
};
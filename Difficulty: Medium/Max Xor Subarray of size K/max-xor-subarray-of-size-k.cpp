class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
   
         // code here
        int msum=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum^=arr[i];
            
        }
        msum=max(msum,sum);
        for(int i=k;i<arr.size();i++){
            sum^=arr[i];
            sum^=arr[i-k];
            msum=max(msum,sum);
            
        }
        return msum;
    }
};
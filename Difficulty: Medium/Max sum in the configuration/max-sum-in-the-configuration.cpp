class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int sum=0;
        int currsum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            currsum+=(i*arr[i]);
        }
        int maxi=currsum;
        int n=arr.size();
        for(int i=n-1;i>=1;i--){
           currsum = currsum + sum - (n * arr[i]);
       maxi = max(maxi, currsum);
            
        }
        return maxi;
    }
};
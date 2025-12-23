// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k){
                count++;
            }
        }
        int mini=0;
        int ans=0;
        for(int i=0;i<count;i++){
            if(arr[i]<=k){
                mini++;
            }
            
        }
        ans=mini;
        for(int i=count;i<arr.size();i++){
          if(arr[i-count]<=k){
              mini--;
          }
          if(arr[i]<=k){
              mini++;
          }
           ans=max(mini,ans);
        }
        return count-ans;
        
    }
};

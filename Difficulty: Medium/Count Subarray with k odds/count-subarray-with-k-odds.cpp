class Solution {
  public:
  int count(vector<int>&arr,int k){
     
      int odd=0;
        int l=0;
        int count=0;
        if(k<0) return 0;
        for(int r=0;r<arr.size();r++){
           if(arr[r]%2!=0){
               odd++;
           }
               while(odd>k){
                   if(arr[l]%2!=0){
                   odd--;
                   }
                   l++;
               }
      
               count+=(r-l)+1;
           }
            return count; 
        }
       
  
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return count(arr,k)-count(arr,k-1);
    }
};
class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
       int n1=arr1.size();
       int n2=arr2.size();
       int i=0,j=n2-1;
       int diff=INT_MAX;
       int first=0,second=0;
       while(i<n1 && j>=0){
           if(abs((arr1[i]+arr2[j])-x)<diff){
               diff=abs((arr1[i]+arr2[j])-x);
               first=arr1[i];
               second=arr2[j];
           }if(arr1[i]+arr2[j]<x){               
               i++;
           }
           else{
               j--;
           }
       }
  return {first,second};
        
    }
};
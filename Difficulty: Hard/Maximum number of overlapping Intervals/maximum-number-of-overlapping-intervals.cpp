class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        // code here
        int maxIndex=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i][1]>maxIndex){
                maxIndex=arr[i][1];
            }
        }
        vector<int>pre(maxIndex+2,0);
        
        for(int i=0;i<arr.size();i++){
            pre[arr[i][0]]+=1;
            pre[(arr[i][1])+1]-=1;
        }
        for(int i=1;i<pre.size();i++){
            pre[i]=pre[i]+pre[i-1];
        }
        int maxi=0;
        for(int i=0;i<pre.size();i++){
            maxi=max(maxi,pre[i]);
        }
        return maxi;
    }
};

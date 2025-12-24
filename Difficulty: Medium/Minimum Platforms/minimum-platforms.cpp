class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        vector<int>pre(2500,0);
        for(int i=0;i<arr.size();i++){
            pre[arr[i]]++;
            pre[dep[i]+1]--;
        }
        for(int i=1;i<pre.size();i++){
            pre[i]+=pre[i-1];
        }
        int maxi=*max_element(pre.begin(),pre.end());
        return maxi;
    }
};

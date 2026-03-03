class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mpp;
        int i=0,j=0;
        int maxi=INT_MIN;
        while(j<n){
            mpp[arr[j]]++;
            while(mpp.size()>2){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0) mpp.erase(arr[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
            
        }
        return maxi;
    }
};
class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int idx=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=k){
                idx=i;
                break;
            }
        }
        return idx;
    }
};
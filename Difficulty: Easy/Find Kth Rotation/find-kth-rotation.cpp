class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        if(arr.size()<=1){
            return 0;
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i]){
                return i;
            }
        }
        return 0 ;
    }
};

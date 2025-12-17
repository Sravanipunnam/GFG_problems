class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(ans.back().back()>=arr[i][0]){
                ans.back().back()=max(ans.back().back(),arr[i][1]);
            }
            else{
                ans.push_back(arr[i]);
            }
            
        }
        return ans;
    }
};
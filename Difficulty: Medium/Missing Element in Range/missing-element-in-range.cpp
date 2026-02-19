class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
            sort(arr.begin(),arr.end());
            int lindex=lower_bound(arr.begin(),arr.end(),low)-arr.begin();
            int hindex=upper_bound(arr.begin(),arr.end(),high)-arr.begin();
            set<int>st;
            for(int i=low;i<=high;i++){
               st.insert(i);
            }
          
            
           for(int i=lindex;i<hindex;i++){
               st.erase(arr[i]);
           }
            vector<int>ans(st.begin(),st.end());
           
        return ans;
    }
};
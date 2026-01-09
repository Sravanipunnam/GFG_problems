class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int left=0;
        int count=0;
        unordered_map<int,int>mp;
        for(int r=0;r<arr.size();r++){
            mp[arr[r]]++;
            while(mp.size()>k){
                mp[arr[left]]--;
                if(mp[arr[left]]==0){
                    mp.erase(arr[left]);
                }
                left++;
            }
        
          count+=(r-left)+1;  
        }
        return count;
    }
};
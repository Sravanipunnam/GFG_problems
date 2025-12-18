class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        multiset<int>eset;
        multiset<int,greater<int>>oset;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
              eset.insert(arr[i]); 
            }else{
                oset.insert(arr[i]);
            }
        }

        int i=0;
      for(int it:oset){
          arr[i]=it;
          i++;
      }
      for(int it:eset){
          arr[i]=it;
          i++;
      }
    }
};
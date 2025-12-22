// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int idx=-1;
        int count=0;
        int ocnt;
        for(int i=0;i<arr.size();i++){
             ocnt=0;
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]==1){
                    ocnt++;
                }
            }
             if(ocnt > count){
               idx=i;
           } 
            count=max(count,ocnt);
          
            
        }
        return idx;
    }
};
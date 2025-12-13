class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        // code here
        int n=mat[0].size();
        for(int i=0;i<mat.size();i++){
        
              swap(mat[i][i],mat[i][n-i-1]);
            
        }
    }
};

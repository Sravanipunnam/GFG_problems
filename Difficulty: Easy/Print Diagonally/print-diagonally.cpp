class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int> ans;

        for(int count = 0; count <= n + m - 2; count++) {
            int i = 0;
            int j = count;

            while(i < n && j >= 0) {
                if(j < m) {
                    ans.push_back(mat[i][j]);
                }
                i++;
                j--;
            }
        }

        return ans;
    }
};
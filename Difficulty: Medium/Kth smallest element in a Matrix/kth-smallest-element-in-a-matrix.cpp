class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        int n = mat.size();
        int low = mat[0][0];
        int high = mat[n-1][n-1];

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;

            int i = 0, j = n - 1;
            while (i < n && j >= 0) {
                if (mat[i][j] <= mid) {
                    count += (j + 1);
                    i++;
                } else {
                    j--;
                }
            }

            if (count < k)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};

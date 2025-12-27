class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        for (int i = 0; i < arr.size(); i++) {
            int missing = arr[i] - (i + 1);

            if (missing >= k) {
                return k + i;
            }
        }

        // If kth missing is after last element
        return k + arr.size();
    }
};

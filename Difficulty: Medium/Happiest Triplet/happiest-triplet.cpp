class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
          sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    

    int i = 0, j = 0, k = 0, diff = INT_MAX;
    int x, y, z;  
    while (i < a.size() && j < b.size() && k < c.size()) {
        int lo = min({a[i], b[j], c[k]});
        int hi = max({a[i], b[j], c[k]});

        if (diff > hi - lo) {
            diff = hi - lo;
            x = hi, y = a[i] + b[j] + c[k] - (hi + lo), z = lo;
        }

        if (a[i] == lo) i++;
        else if (b[j] == lo) j++;
        else k++;
    }
      vector<int>ans;
      ans.push_back(x);
      ans.push_back(y);
      ans.push_back(z);
      return ans;
        
    }
};
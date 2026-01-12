class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
       priority_queue<pair<int,int>> pq; // {value, index}
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {

            // insert current element
            pq.push({arr[i], i});

            // remove elements outside the window
            while (!pq.empty() && pq.top().second <= i - k)
                pq.pop();

            if (i >= k - 1)
                ans.push_back(pq.top().first);
        }

        return ans;
    }
};
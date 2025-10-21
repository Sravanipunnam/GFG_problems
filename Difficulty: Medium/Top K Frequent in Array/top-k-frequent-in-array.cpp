class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        int count=0;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
         vector<pair<int, int>> vec(mp.begin(), mp.end());

    // Sort by value (ascending)
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if(a.second==b.second){
                return a.first>b.first;
            }
            return a.second > b.second; // compare by value
        });
        vector<int>res;
         for (auto &[num, freq] : vec) {
            if(count==k)
            {
                break;
            }
            res.push_back(num);
            count++;
        }
        
        // for (auto &[num, freq] : vec) {
        //     cout << num << " -> " << freq << endl;
        // }

       
        return res;
        
    }
};

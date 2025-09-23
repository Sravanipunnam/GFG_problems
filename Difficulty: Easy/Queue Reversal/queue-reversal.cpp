class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        vector<int>ans;
       while(!q.empty())
       {
           ans.push_back(q.front());
           q.pop();
       }
       reverse(ans.begin(),ans.end());
       for(int i:ans)
       {
           q.push(i);
       }
    }
};
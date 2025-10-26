class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int ans=0,cost=0;
       priority_queue<int, vector<int>, greater<int>> minHeap;
       for(int i:arr)
       {
           minHeap.push(i);
       }
       while(minHeap.size()>1)
       {
           int first=minHeap.top();
           minHeap.pop();
           int second=minHeap.top();
           minHeap.pop();
           cost=first+second;
           ans+=cost;
           minHeap.push(cost);
           
       }
     
       return ans;
        
    }
};
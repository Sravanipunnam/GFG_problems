class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
       queue<int>q1,q2;
       int n=q.size();
       int i=0;
       while(!q.empty() && i<n/2){
           q1.push(q.front());
           q.pop();
           i++;
       }
        while(!q.empty()){
           q2.push(q.front());
           q.pop();
       }
       while(!q1.empty()){
           q.push(q1.front());
           q.push(q2.front());
           q1.pop();
           q2.pop();
           
       }
    }
};
class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        int n=dq.size();
        k=k%n;
        if(type==1){
            while(k>0)
            {
                int ans=dq.back();
                dq.pop_back();
                dq.push_front(ans);
                k--;


            }

        }
        else
        {
            while(k>0)
            {
               int ans=dq.front();
               dq.pop_front();
               dq.push_back(ans);
               k--;


             
            }
        }

    }
};
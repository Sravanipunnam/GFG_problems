class Solution {
  public:
    int findMoves(vector<int>& c, vector<int>& p) {
        // code here
        int count=0;
        sort(c.begin(),c.end());
        sort(p.begin(),p.end());
        for(int i=0;i<p.size();i++){
            count+=abs(p[i]-c[i]);
        }
        return count;
        
    }
};
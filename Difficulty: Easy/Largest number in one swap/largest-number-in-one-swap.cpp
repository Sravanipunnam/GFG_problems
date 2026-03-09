class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int maxi=-1;
        int ind=-1;
        int l=-1,r=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>maxi){
                maxi=s[i];
                ind=i;
            }
            else if(s[i]<maxi){
                l=i;
                r=ind;
            }
        }
        if(l==-1) return s;
        swap(s[l],s[r]);
        return s;
    }
};
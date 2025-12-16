class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string res="";
        res+=s1;
        res+=s1;
        if(res.find(s2)!=string::npos){
            return true;
        }
        return false;
    }
};
class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string>res;
        for(int i=1;i<=n;i++)
        {
         string s=bitset<32>(i).to_string();
          s.erase(0, s.find_first_not_of('0'));
         res.push_back(s);
            
        }
        return res;
    }
};
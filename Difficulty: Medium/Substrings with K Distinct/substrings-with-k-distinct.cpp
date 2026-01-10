class Solution {
  public:
  int cnt(string &s,int k){
       int left=0;
        int freq[26]={0};
        int count=0;
        int d=0;
        for(int right=0;right<s.size();right++){
            if(freq[s[right]-'a']==0){
                d++;
            }
            freq[s[right]-'a']++;
            while(d>k){
                freq[s[left]-'a']--;;
                if(freq[s[left]-'a']==0){
                   d--;
                }
                left++;
            }
            count+=(right-left)+1;
            
        }
        return count;
  }
    int countSubstr(string& s, int k) {
        // code here
       return cnt(s,k)-cnt(s,k-1);
        
    }
};
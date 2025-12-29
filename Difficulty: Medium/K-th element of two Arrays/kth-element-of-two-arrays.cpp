class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>ans;
        int i=0,j=0;
        int count=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                count++;
                i++;
            }else if(a[i]==b[j]){
                ans.push_back(a[i]);
                ans.push_back(b[j]);
                count+=2;
                i++;
                j++;
                
            }else{
                ans.push_back(b[j]);
                count++;
                j++;
            }
            
            if(count==k){
                break;
            }
            
        }
        while(i<a.size()){
            ans.push_back(a[i]);
            count++;
             if(count==k){
                break;
            }
            i++;
        }
          while(j<b.size()){
            ans.push_back(b[j]);
            count++;
             if(count==k){
                break;
            }
            j++;
        }
        return ans[k-1];
        
    }
};
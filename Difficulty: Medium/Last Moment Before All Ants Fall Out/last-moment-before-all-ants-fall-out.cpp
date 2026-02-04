class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int left_time=0;
        int right_time=0;
        for(int i=0;i<left.size();i++){
            left_time=max(left[i],left_time);
            
        }
        for(int i=0;i<right.size();i++){
            right_time=max(right_time,n-right[i]);
        }
        return max(left_time,right_time);
    }
};
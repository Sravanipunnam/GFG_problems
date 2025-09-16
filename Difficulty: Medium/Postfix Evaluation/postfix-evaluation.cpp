class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<long long>st;
        for(string &it : arr)
        {
            if(it=="+" || it=="-"||it=="/"|| it=="*"||it=="^")
            {
                long long b=st.top();
                st.pop();
                long long a=st.top();
                st.pop();
                long long res=0;
                if(it=="+") res=a+b;
                else if(it=="-") res=a-b;
                else if (it=="/") res=floor((double)a/(double)b);
                else if(it=="*") res=a*b;
                else res=pow(a,b);
                st.push(res);
            }
            else
            {
                st.push(stoi(it));
            }
        }
        return (int)st.top();
    }
};
class Solution {
    int count=0;
    void fun(int n,int from,int to,int aux){
        if(n==0){
            return;
        }
        fun(n-1,from,to,aux);
        count++;
        fun(n-1,aux,to,from);
    }
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
         fun(n,from,to,aux);
         return count;
    }
};
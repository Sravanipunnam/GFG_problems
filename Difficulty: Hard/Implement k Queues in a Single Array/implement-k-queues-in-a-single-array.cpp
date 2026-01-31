class kQueues {

  public:
  int arr_size=0;
  int nn=0;
   vector<queue<int>>arr;
    kQueues(int n, int k) {
        // Initialize your data members
        arr.resize(k);
        nn=n;
       
    }

    void enqueue(int x, int i) {
        // enqueue element x into queue i
       arr[i].push(x);
       arr_size++;
    }

    int dequeue(int i) {
        // dequeue element from queue i
        int val;
     if(arr[i].empty()){
         return -1;
     }else{
         val=arr[i].front();
         arr[i].pop();
         arr_size--;
         
     }
     return val;
        
    }

    bool isEmpty(int i) {
        // check if queue i is empty
       if(arr[i].empty()){
           return true;
       }
       return false;
    }

    bool isFull() {
        // check if array is full
       if(arr_size==nn){
           return true;
           
       }
       return false;
    }
};

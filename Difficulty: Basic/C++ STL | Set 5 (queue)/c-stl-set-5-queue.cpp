/*You are required to complete below methods*/

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    // Your code here
    q.push(x);
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    
    // Your code here
     if(q.empty()) return -1;
   int n=q.front();
   q.pop();
   return n;
   
}

/*returns the size of the queue q */
    
int getSize(queue<int> &q) {
    return q.size();
    // Your code here
}

    
/*returns the last element of the queue */
int getBack(queue<int> &q) {
    // Your code here
    if(q.empty()) return -1;
    int n=q.back();
    return n;
   
}
    

/*returns the first element of the queue */
int getFront(queue<int> &q) {
    // Your code here
     if(q.empty()) return -1;
     int n=q.front();
    return n;
}
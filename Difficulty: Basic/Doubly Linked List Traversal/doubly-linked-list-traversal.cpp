// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
vector<int> displayList(Node *head) {
    vector<int>ans;
   while(head!=nullptr)
   {
       ans.push_back(head->data);
       head=head->next;
   }
   return ans;
}
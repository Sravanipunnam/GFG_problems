/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        Node* last=nullptr;
        Node * curr=head;
        while(curr!=nullptr)
        {
            last=curr->prev;
            curr->prev=curr->next;
            curr->next=last;
            curr=curr->prev;
        }
        return last->prev;
    }
};
/* Structure of a Linked List node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
        // code here
          if(head == nullptr || head->next == nullptr) {
        return head;
    }
    
    Node* nextNode = compute(head->next);
    
    if (nextNode->data > head->data) {
        delete(head);
        return nextNode;
    }
    
    head->next = nextNode;
    
    return head;
    }
};
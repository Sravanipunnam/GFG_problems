/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
Node* insertSorted(Node* head, Node* node) {
    if (!head || node->data < head->data) {
        node->bottom = head;
        return node;
    }

    Node* curr = head;
    while (curr->bottom && curr->bottom->data < node->data) {
        curr = curr->bottom;
    }

    node->bottom = curr->bottom;
    curr->bottom = node;

    return head;
}

Node* flatten(Node* root) {
    Node* dummy = NULL;

    while (root) {
        Node* curr = root;
        root = root->next;

        while (curr) {
            Node* nextBottom = curr->bottom;
            curr->bottom = NULL;
            curr->next = NULL;

            dummy = insertSorted(dummy, curr);
            curr = nextBottom;
        }
    }
    return dummy;
}

        
    
};
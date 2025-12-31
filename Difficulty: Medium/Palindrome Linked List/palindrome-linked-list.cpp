/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
  Node* revf(Node* head){
      if(head==nullptr){
          return head;
      }
      Node* prev=nullptr;
      while(head!=nullptr){
          Node* nxt=head->next;
          head->next=prev;
          prev=head;
          head=nxt;
          
      }
      return prev;
  }
    bool isPalindrome(Node *head) {
        //  code here  
        if(head==nullptr ){
            return true;
        }
        // if(head->next->next==nullptr){
        //     if(head->data==head->next->data){
        //         return true;
        //     }
        //     return false;
        // }
        int n=0;
        Node* dummy=head;
        while(dummy!=nullptr){
            n++;
            dummy=dummy->next;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(n%2!=0){
            slow==slow->next;
        }
        slow=revf(slow);
        while(slow!=nullptr){
            if(head->data!=slow->data){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;
        
    }
};
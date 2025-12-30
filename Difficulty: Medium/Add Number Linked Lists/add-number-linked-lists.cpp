/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node* revf(Node* head){
      Node* prev=nullptr;
      Node* curr=head;
      while(curr!=nullptr){
          Node* nxt=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nxt;
      }
      return prev;
      
  }
  Node* trim(Node* head){
      if(head==nullptr){
          return head;
      }
      while(head!=nullptr){
          if(head->data!=0){
              return head;
          }
          head=head->next;
      }
      return head;
  }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
         head1=trim(head1);
        head2=trim(head2);
         head1=revf(head1);
          head2=revf(head2);
          Node* dummy=new Node(-1);
          Node* curr=dummy;
          int carry=0;
          while(head1!=nullptr && head2!=nullptr){
              curr->next= new Node((head1->data+head2->data+carry)%10);
              carry=(head1->data+head2->data+carry)/10;
              curr=curr->next;
              head1=head1->next;
              head2=head2->next;
          }
         
          while(head2!=nullptr){
               curr->next= new Node((head2->data+carry)%10);
              carry=(head2->data+carry)/10;
              curr=curr->next;
              head2=head2->next;
              
          }
            while(head1!=nullptr){
               curr->next= new Node(((head1->data)+carry)%10);
              carry=(head1->data+carry)/10;
              curr=curr->next;
              head1=head1->next;
              
          }
          if(carry){
              curr->next=new Node(carry);
              curr=curr->next;
              carry=0;
          }
          Node* head=revf(dummy->next);
          return head;
          
        
        
        
    }
};
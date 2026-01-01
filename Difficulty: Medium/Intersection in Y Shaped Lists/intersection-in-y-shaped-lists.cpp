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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node* h1=head1;
        Node* h2=head2;
        int n1=0,n2=0;
        while(h1!=nullptr){
            n1++;
            h1=h1->next;
        }
        while(h2!=nullptr){
            n2++;
            h2=h2->next;
        }
        
        int diff=abs(n1-n2);
        if(n1>n2){
            int cnt=0;
            while(cnt<diff){
                cnt++;
                head1=head1->next;
            }
            
        }else if(n1<n2){
              int cnt=0;
            while(cnt<diff){
                cnt++;
                head2=head2->next;
            }
            
        }
          while(head1 && head2){
                if(head1==head2){
                    
                    break;
                }
                head1=head1->next;
                head2=head2->next;
            }
        return head1;
    }
    
};
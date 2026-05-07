/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void fun(Node *root,string &s){
      if(root==nullptr){
          s+="#";
          return;
      }
      s+=(root->data);
      if(root->left){
          fun(root->left,s);
      }
      if(root->right){
          fun(root->right,s);
      }
  }
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        string s1="",s2="";
        fun(root1,s1);
        fun(root2,s2);
        return (s1.find(s2)!=string::npos);
    }
};
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        if(root==nullptr) return {};
        queue<pair<Node*,int>>q;
        map<int,int>mpp;
        q.push({root,0});
        while(!q.empty()){
            Node* temp=q.front().first;
            int d=q.front().second;
            q.pop();
            if(mpp[d]==0){
                mpp[d]=temp->data;
            }
            if(temp->left){
                q.push({temp->left,d-1});
            }
            if(temp->right){
                q.push({temp->right,d+1});
            }
        }
        vector<int>ans;
        for(auto &it:mpp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
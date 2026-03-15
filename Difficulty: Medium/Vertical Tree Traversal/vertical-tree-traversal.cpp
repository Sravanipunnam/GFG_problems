/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        
        if(!root) return {};
        map<int,vector<int>>mpp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* temp=q.front().first;
            int d=q.front().second;
            q.pop();
            mpp[d].push_back(temp->data);
            if(temp->left){
                q.push({temp->left,d-1});
            }
            if(temp->right){
                q.push({temp->right,d+1});
            }
            
        }
        int n=mpp.size();
        vector<vector<int>>ans;
        for(auto &it:mpp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};

#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insertionCBT(Node* root, int val, queue<Node*>&q){
Node* newNode= new Node(val);
if(root==NULL){
    root=newNode;
    q.push(root);
    return root ;
}
Node* curr=q.front();
if(curr->left==NULL){
    curr->left=newNode;
}
else if(curr->right==NULL){
    curr->right=newNode;
    q.pop();
}
q.push(newNode);
return root;
}
vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> result;
    if (root == NULL) return result;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;
        for (int i = 0; i < levelSize; i++) {
            Node* curr = q.front();
            q.pop();
            level.push_back(curr->data);

            if (curr->left != NULL) q.push(curr->left);
            if (curr->right != NULL) q.push(curr->right);
        }
        result.push_back(level);
    }
    return result;
}
int main() {
    Node* root=NULL;
    Node* r=root;
    queue<Node*>q;
    for(int i=1;i<=15;i++){
         r=insertionCBT(r,i,q);
    }

    vector<vector<int>> levels = levelOrder(r);
    for (auto &level : levels) {
        for (int val : level)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
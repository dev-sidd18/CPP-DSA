#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right=nullptr;
    }
};
node* insertnode(node* root, int val){
if(root==nullptr){
    root = new node(val);
    return root;
}
queue<node*>q;
q.push(root);
while(!q.empty()){
    node*curr=q.front();
    q.pop();
    if(curr->left!=nullptr)
    q.push(curr->left);
    else{
        curr->left=new node(val);
        return root;

    }
    if(curr->right!=nullptr)
    q.push(curr->right);
    else{
        curr->right=new node(val);
        return root;
    }
}
}
void display(node* root){
    if(root==NULL){
        return;
    }
    else{
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }

}
int main()
{
    
node* root=new node(15);
root->left=new node(19);
root->left->left=new node(16);
root->left->right=new node(17);
root->right=new node(9);
root->right->left=new node(18);
insertnode(root,20);
display(root);

}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int a)
    {
        val = a;
        left = right = nullptr;
    }
} ;
int countnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+countnodes(root->left)+countnodes(root->right);
}
int height(node* root){
    if(root==NULL){
        return 0;
    }
         int left=height(root->left);
         int right= height(root->right);
    if(left>right){
        return 1+left;
    }
    else
    return 1+right;
}
int leaf(node* root){
    if(root==NULL)
    return 0;
        else if(root->left==NULL && root->right==NULL){
            return 1;
        }
        else 
        return leaf(root->left)+leaf(root->right);
 }
int onechild(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        if(root->left!=NULL && root->right==NULL){
            return 1+onechild(root->left);
        }
        else if(root->left==NULL && root->right !=NULL){
            return 1+onechild(root->right);
        }
        else
        return onechild(root->right)+onechild(root->left);
    }
}
int twochild(node* root){
    if(root==NULL)
    return 0;
    if(root->left!=NULL && root->right !=NULL){
        return 1+twochild(root->left)+twochild(root->right);
    }
    else{
        return twochild(root->left)+twochild(root->right);
    }
}
int sumofnode(node* root){
  if(root==NULL){
    return 0;
  }  
  return root->val+sumofnode(root->left)+sumofnode(root->right);
}
void inorder(node* root){
    if(root== NULL)
    return ;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root== NULL)
    return ;
    cout<<root->val<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node* root){
    if(root== NULL)
    return ;
    inorder(root->left);
    inorder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    node* root=new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right= new node(6);
    root->right->right->left=new node(7);
    cout<<"no of nodes :"<<countnodes(root)<<endl;
    cout<<"height of tree :"<<height(root)<<endl;
    cout<<"no of leaf of the tree :"<<leaf(root)<<endl;
    cout<<"no of one child nodes :"<<onechild(root)<<endl;
    cout<<"no of two child nodes :"<<twochild(root)<<endl;
    cout<<"sum of all nodes :"<<sumofnode(root)<<endl;
    cout<<"inorder :"; inorder(root);
    cout<<endl;
    cout<<"preorder :"; preorder(root);
    cout<<endl;
    cout<<"postorder :"; postorder(root);
}
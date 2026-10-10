#include <bits/stdc++.h>
using namespace std;
 struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
            return new TreeNode(val);

            if(val>root->val){
                root->right=insertIntoBST(root->right,val);
            }
            else if(val<root->val){
                root->left= insertIntoBST(root->left,val);
            }
            return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root!=NULL){
            if(val==root->val) return root;

            else if(val>root->val){
                root=root->right;
            }

             else if(val<root->val){
                root=root->left;
            }
        }
        return NULL;

    }
    TreeNode* findmin(TreeNode* root){
        while(root->left!=NULL){
            root=root->left
        }
        return root;
    }
    TreeNode* deletenode(TreeNode* root, int key){
        if(root==NULL) return NULL;

        if(key<root->val){
            root->left=deletenode(root->right, key);

        }
        else if(key> root->val){
            root->right = deletenode(root->right, key);

        }
        else{
            if(root->left==NULL){
                TreeNode* temp= root->right;
                delete(root);
                return temp;

            }
            if(root->right==NULL){
                TreeNode* temp= root->left;
                delete(root);
                return temp;
            }
            else{
                TreeNode* succesor= findmin(root->right);
                root->val=succesor->val;
                root->right=deletenode(root->right, succesor->val);
                return root;
        }
    }
    void display(TreeNode* root){
    if(root==NULL){
        return;
    }
    else{
        display(root->left);
        cout<<root->val<<" ";
        display(root->right);
    }

}
    int main(){
        TreeNode* root= NULL;
        root= insertIntoBST(root, 10);
        root = insertIntoBST(root, 20);
        root= insertIntoBST(root, 30);
        display(root);
    }
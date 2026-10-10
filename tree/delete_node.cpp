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
    if (root == NULL)
        return new TreeNode(val);

    if (val > root->val) {
        root->right = insertIntoBST(root->right, val);
    } else if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    }
    return root;
}

TreeNode* findmin(TreeNode* root) {
    while (root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;
}

TreeNode* deletenode(TreeNode* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->val) {
        root->left = deletenode(root->left, key);
    } else if (key > root->val) {
        root->right = deletenode(root->right, key);
    } else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        TreeNode* successor = findmin(root->right);
        root->val = successor->val;
        root->right = deletenode(root->right, successor->val);
    }
    return root;
}

void display(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    display(root->left);
    cout << root->val << " ";
    display(root->right);
}

int main() {
    TreeNode* root = NULL;

    root = insertIntoBST(root, 10);
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 15);
    root = insertIntoBST(root, 2);
    root = insertIntoBST(root, 8);
    root = insertIntoBST(root, 14);
    root = insertIntoBST(root, 25);
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 30);
    root = insertIntoBST(root, 18);

    
    display(root);
    cout << endl;

    root = deletenode(root, 8);
   
    display(root);
    cout << endl;

    root = deletenode(root, 15);
   
    display(root);
    cout << endl;

    return 0;
}
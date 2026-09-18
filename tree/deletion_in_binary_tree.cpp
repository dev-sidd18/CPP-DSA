// #include <bits/stdc++.h>
// using namespace std;

// struct node {
//     int data;
//     node* left;
//     node* right;

//     node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void deletedeep(node* root, node* dnode) {
//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         if (temp == dnode) {
//             temp = nullptr;
//             delete dnode;
//             return;
//         }

//         if (temp->left) {
//             if (temp->left == dnode) {
//                 temp->left = nullptr;
//                 delete dnode;
//                 return;
//             }
//             q.push(temp->left);
//         }

//         if (temp->right) {
//             if (temp->right == dnode) {
//                 temp->right = nullptr;
//                 delete dnode;
//                 return;
//             }
//             q.push(temp->right);
//         }
//     }
// }

// node* deletion(node* root, int key) {
//     if (root == nullptr) {
//         return nullptr;
//     }

//     if (root->left == nullptr && root->right == nullptr) {
//         if (root->data == key) {
//             return nullptr;
//         }
//         return root;
//     }

//     queue<node*> q;
//     q.push(root);

//     node* keyNode = nullptr;
//     node* temp = nullptr;

//     while (!q.empty()) {
//         temp = q.front();
//         q.pop();

//         if (temp->data == key) {
//             keyNode = temp;
//         }

//         if (temp->left) q.push(temp->left);
//         if (temp->right) q.push(temp->right);
//     }

//     if (keyNode != nullptr) {
//         int deepestValue = temp->data;
//         keyNode->data = deepestValue;
//         deletedeep(root, temp);
//     }

//     return root;
// }

// void display(node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     display(root->left);
//     cout << root->data << " ";
//     display(root->right);
// }

// int main() {
//     node* root = new node(10);
//     root->left = new node(9);
//     root->left->left = new node(8);
//     root->left->right = new node(7);
//     root->right = new node(11);
//     root->right->left = new node(6);
//     root->right->right = new node(5);

//     root = deletion(root, 9);
//     display(root);
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = right = nullptr;
    }
};
node* deletion(node* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }

    if (root->left == nullptr && root->right == nullptr) {
        if (root->data == key) {
            return nullptr;
        }
        return root;
    }

    queue<node*> q;
    q.push(root);

    node* keyNode = nullptr;
    node* temp = nullptr;

    while (!q.empty()) {
        temp = q.front();
        q.pop();

        if (temp->data == key) {
            keyNode = temp;
        }

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }

    if (keyNode != nullptr) {
        delete(temp);
        return root;
    }

    return root;
}

void display(node* root) {
    if (root == nullptr) {
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main() {
    node* root = new node(10);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(7);
    root->right = new node(11);
    root->right->left = new node(6);
    root->right->right = new node(5);

    root = deletion(root, 9);
    display(root);
    return 0;
}
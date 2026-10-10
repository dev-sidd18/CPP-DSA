#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
node *deletion(node *root, int target)
{
    if (root == nullptr)
    {
        return root;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        if (root->data == target){
            delete root;
        return nullptr;}
        else{
            return root;
        }
    }
    else
    {
        queue<node *> q;
        node *deletenode;
        node *lastparent;
        node *lastnode;
        q.push(root);
        while (!q.empty())
        {
            node *curr = q.front();
            q.pop();
            if (curr->data == target)
                deletenode = curr;

            if (curr->left != nullptr)
            {
                lastparent = curr;
                lastnode = curr->left;
                q.push(curr->left);
            }

            if (curr->right != nullptr)
            {
                lastparent = curr;
                lastnode = curr->right;
                q.push(curr->right);
            }
        }
        if (deletenode != nullptr)
            deletenode->data = lastnode->data;

        if (lastparent->right == lastnode)
        {
            lastparent->right = nullptr;
        }

        else
        {
            lastparent->left = nullptr;
        }
        return root;
    }
}
vector<vector<int>> levelOrder(node *root)
{
    vector<vector<int>> result;
    if (root == NULL)
        return result;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int levelSize = q.size();
        vector<int> level;
        for (int i = 0; i < levelSize; i++)
        {
            node *curr = q.front();
            q.pop();
            level.push_back(curr->data);

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        result.push_back(level);
    }
    return result;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    deletion(root, 2);
    vector<vector<int>> levels = levelOrder(root);
    for (auto &level : levels)
    {
        for (int val : level)
            cout << val << " ";
        cout << endl;
    }
}

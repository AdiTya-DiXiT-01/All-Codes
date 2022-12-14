#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};

void sumReplace(Node *root)
{
    if (root == NULL)
        return;

    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left != NULL)
        root->data += root->left->data;

    if (root->right != NULL)
        root->data += root->right->data;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    preOrder(root);
    cout << "\n";
    sumReplace(root);
    preOrder(root);
    return 0;
}
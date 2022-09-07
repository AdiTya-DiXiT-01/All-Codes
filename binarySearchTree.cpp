#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *right;
    Node *left;
    int data;
    Node(int val)
    {
        right = NULL;
        left = NULL;
        data = val;
    }
};

Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;

    if (root->data < key)
        return searchInBST(root->right, key);

    return searchInBST(root->left, key);
}

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insertBST(root->left, val);

    if (val > root->data)
        root->right = insertBST(root->right, val);

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    inorder(root);

    searchInBST(root, 4);
    return 0;
}
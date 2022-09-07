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

void subTreeNodes(Node *root, int k)
{
    if (root == NULL or k < 0)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    subTreeNodes(root->left, k - 1);
    subTreeNodes(root->right, k - 1);
}

int nodesAtK(Node *root, Node *target, int k)
{
    if (root == NULL)
        return -1;

    if (root == target)
    {
        subTreeNodes(root, k);
        return 0;
    }

    int dl = nodesAtK(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            subTreeNodes(root->right, k - dl - 2);
        }
        return dl + 1;
    }

    int dr = nodesAtK(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            subTreeNodes(root->left, k - dr - 2);
        }
        return dr + 1;
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    nodesAtK(root, root->left, 1);
    return 0;
}
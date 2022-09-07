#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        right = NULL;
        left = NULL;
        data = val;
    }
};

int search(int arr[], int key, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
        return NULL;

    int curr = preorder[idx++];
    Node *node = new Node(curr);

    if (start == end)
        return node;

    int pos = search(inorder, curr, start, end);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

Node *buildTree2(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
        return NULL;

    int curr = postorder[idx--];

    Node *node = new Node(curr);

    if (start == end)
        return node;

    int pos = search(inorder, curr, start, end);
    node->right = buildTree2(postorder, inorder, pos + 1, end);
    node->left = buildTree2(postorder, inorder, start, pos - 1);

    return node;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
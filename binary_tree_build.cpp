#include <bits/stdc++.h>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = 0; i < end; i++)
    {
        if (inorder[i] == curr)
            return i;
    }

    return -1;
}

Node *buildtree(int inorder[], int preorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
        return NULL;

    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);

    if (start == end)
        return node;

    int pos = search(inorder, start, end, curr);
    node->left = buildtree(inorder, preorder, start, pos - 1);
    node->right = buildtree(inorder, preorder, pos + 1, end);

    return node;
}

void postorder(Node *root)
{
    /*
     * LEFT SUBTREE
     * RIGHT SUBTREE
     * ROOT
     */
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};

    Node *root = buildtree(inorder, preorder, 0, 6);
    postorder(root);
    return 0;
}
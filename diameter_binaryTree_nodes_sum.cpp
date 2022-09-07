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

int ans = 0;
int treeDiameter(Node *root)
{
    if (root == NULL)
        return 0;

    int lh = treeDiameter(root->left);
    int rh = treeDiameter(root->right);

    ans = max(ans, lh + rh + 1);

    return max(lh, rh) + 1;
}

/*

// CAN BE ALSO SOLVED WITH THE USE OF UNORDERED_MAP

int treeDiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;
    int lDiameter = treeDiameter(root->left, &lh);
    int rDiameter = treeDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
}
*/
int countNodes(Node *root)
{
    if (root == NULL)
        return 0;

    return countNodes(root->left) + countNodes(root->right) + 1;
}

int sumNodes(Node *root)
{
    if (root == NULL)
        return 0;

    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}

int treeHeight(Node *root)
{
    if (root == NULL)
        return 0;

    return max(treeHeight(root->left), treeHeight(root->right)) + 1;
}

int calcDiameter(Node *root)
{
    if (root == NULL)
        return 0;

    int lHeight = treeHeight(root->left);
    int rheight = treeHeight(root->right);
    int currDiameter = lHeight + rheight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
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

    cout << countNodes(root) << "\n";
    cout << sumNodes(root) << "\n";
    cout << treeHeight(root) << "\n";
    cout << calcDiameter(root) << "\n";
    treeDiameter(root);
    cout << ans;

    return 0;
}
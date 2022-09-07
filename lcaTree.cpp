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

int LCA(Node *root, int n1, int n2)
{
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

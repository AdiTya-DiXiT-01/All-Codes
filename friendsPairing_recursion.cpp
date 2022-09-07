#include <bits/stdc++.h>

using namespace std;

int pairs(int n)
{
    if (n == 1 || n == 0 || n == 2)
        return n;

    return ((n - 1) * pairs(n - 2)) + pairs(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << pairs(n);
    return 0;
}
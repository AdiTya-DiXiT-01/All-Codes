#include <bits/stdc++.h>

using namespace std;

int setbit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

void unique(int arr[], int n)
{
    int xorSum = 0;

    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int tempXor = xorSum;
    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        pos++;
        xorSum >> 1;
    }
    int newXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }

    cout << newXor << endl;
    cout << (tempXor ^ newXor) << endl;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unique(a, n);

    return 0;
}
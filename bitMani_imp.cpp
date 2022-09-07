#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos));
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

void unique(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            ans = setBit(ans, i);
        }
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unique(arr, n);
    return 0;
}
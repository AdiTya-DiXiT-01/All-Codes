#include <bits/stdc++.h>

using namespace std;

void countSort(int arr[], int n)
{
    int count[8] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i < 8; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    int ans[n];
    int i = n - 1;
    while (i >= 0)
    {
        ans[--count[arr[i]]] = arr[i];
        i--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    countSort(a, n);
    return 0;
}
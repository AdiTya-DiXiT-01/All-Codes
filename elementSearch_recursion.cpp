#include <bits/stdc++.h>

using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;

    if (arr[i] == key)
        return i;

    return firstocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;

    int restArray = lastocc(arr, n, i + 1, key);

    if (restArray != -1)
        return restArray;

    if (arr[i] == key)
        return i;

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << firstocc(a, n, 0, 2) << endl;
    cout << lastocc(a, n, 0, 2) << endl;
    return 0;
}
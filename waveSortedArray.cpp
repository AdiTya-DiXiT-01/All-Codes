#include <bits/stdc++.h>

using namespace std;

void waveSort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);

        if (arr[i] > arr[i + 1] && i <= (n - 2))
            swap(arr[i], arr[i + 1]);

        i += 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    waveSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
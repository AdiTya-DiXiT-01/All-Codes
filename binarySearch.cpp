#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int k)
{
    int s = 0;
    int l = n;
    while (l >= s)
    {
        int mid = l + s / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            l = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
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

    int k;
    cin >> k;

    cout << binarySearch(arr, n, k) << endl;
}
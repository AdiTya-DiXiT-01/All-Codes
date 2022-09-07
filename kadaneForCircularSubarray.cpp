#include <bits/stdc++.h>

using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxsum = max(maxsum, currentSum);
    }
    return maxsum;
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

    int wrapsum, nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = total + kadane(arr, n);

    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}
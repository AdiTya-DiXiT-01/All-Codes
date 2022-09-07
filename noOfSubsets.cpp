#include <bits/stdc++.h>

using namespace std;

void subsets(int arr[], int n)
{
    /* 
    *1<<n gives 2 ki power n
    */
    for (int i = 0; i < 1 << n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int a[] = {2, 4, 5, 9};
    subsets(a, 4);
    return 0;
}
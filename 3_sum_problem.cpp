#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    bool flag = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int curr = a[i] + a[low] + a[high];
            if (target == curr)
            {
                flag = 1;
                break;
            }
            if (curr < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }

        if (flag)
        {
            cout << "YES\n";
            exit(0);
        }
    }

    if (!flag)
        cout << "NO\n";

    return 0;
}
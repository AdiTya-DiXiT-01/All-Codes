#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int ans = 0, zerocnt = 0, i = 0;

    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
            zerocnt++;

        while (zerocnt > k)
        {
            if (a[i] == 0)
                zerocnt--;

            i++;
        }

        ans = max(ans, j - i + 1);
    }

    cout << ans << endl;
    return 0;
}
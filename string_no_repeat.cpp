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

    string s;
    cin >> s;
    vector<int> dict(256, -1);
    int start = -1, maxLen = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (dict[s[i]] > start)
            start = dict[s[i]];

        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }

    cout << maxLen << endl;
    return 0;
}
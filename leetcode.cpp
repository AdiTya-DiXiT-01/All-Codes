#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define line "\n";
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; ++i)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define Lets ios_base::sync_with_stdio(false);
#define Crack cin.tie(NULL);
#define It cout.tie(NULL);
using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int mask1 = 0, mask2 = 0, ans = 0;

    for (int i = 0; i < n; ++i)
    {
        mask1 = mask1 | (1 << i);
    }

    for (int i = 0; i < n; ++i)
    {
        if ((mask2 & (1 << a[i] - 1)) == (1 << a[i] - 1))
            ans = a[i];
        else
            mask2 = mask2 | (1 << a[i] - 1);
    }

    int mask3 = (mask1 ^ mask2);

    int cnt = 0;

    while (mask3 != 0)
    {
        cnt++;
        mask3 = (mask3 >> 1);
    }

    cout << ans << " " << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
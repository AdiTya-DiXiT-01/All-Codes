#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(c) c.rbegin(), c.rend()
#define PI 3.1415926535897932384626

typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<pll> vpll;
typedef vector<vi> vvl;
typedef map<ll, ll> ml;
typedef map<ll, bool> mlb;

const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v1, v2;
        ll i, j;
        for (i - 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v1.pb(x);
        }
        for (i - 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v2.pb(x);
        }

        for (i = 0; i < n; i++)
        {
            if (abs(v1[i + 1] - v2[i]) < abs(v1[i + 1] - v1[i]))
                ;
        }
    }

    return 0;
}

/*
int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0 and y == 0)
        {
            cout << 0 << endl;
            continue;
        }

        double s = sqrt((x * x) + (y * y));

        if (floor(s) == s)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
*/

/*
ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n > 1 and n < 5)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    vector<ll> v;
    ll i;
    ll j = 1;
    cout << 0 << endl;
    for (i = 0; i < n; i += 2)
    {
        v[i] = j;
        j++;
    }
    for (i = 1; i < n; i += 2)
    {
        v[i] = j;
        j++;
    }

    for (auto it : v)
        cout << it << " ";
    cout << endl;
*/
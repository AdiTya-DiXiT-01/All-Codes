/*
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

const int MOD = 1e9 + 7;
const int N = 1e5 + 10;

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
        ll n;
        cin >> n;

        int ans = n + 2 * ceil(n / 2) + 2 * ceil(n / 3);
        cout << ans << endl;
    }
    return 0;
}
*/
// C++ program to illustrate
// next_permutation example

// this header file contains next_permutation function
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    sort(arr, arr + 3);

    cout << "The 3! possible permutations with 3 elements:\n";
    do
    {
        cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << "\n";
    } while (next_permutation(arr, arr + 5));

    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << '\n';

    return 0;
}

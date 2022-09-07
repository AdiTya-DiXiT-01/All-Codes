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

int idx(char c)
{
    if (c == 'h')
        return 0;

    if (c == 'e')
        return 1;

    if (c == 'l')
        return 2;

    return 3;
}

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    printBinary(9);
    int a = 9;
    int i = 3;
    if (a & (1 << i))
    {
        cout << "set bit" << endl;
    }
    else
    {
        cout << "not set" << endl;
    }

    // set bit
    printBinary(a | (1 << 1));

    // unset bit
    printBinary(a & ~(1 << 3));

    // toggle
    printBinary(a ^ (1 << 2));
    printBinary(a ^ (1 << 3));

    // uppercase to lower
    char B = 'B';
    char b = B | ' ';
    cout << b << endl;

    // lowercase to uppercase
    char c = 'c';
    char C = c & '_';
    cout << C << endl;

    return 0;
}

class Solution
{
public:
    void rotate(vector<vector<int>> &mat)
    {

        int n = mat.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                    swap(mat[i][j], mat[j][i]);
            }
        }

        for (int j = 0; j < (n / 2); j++)
        {
            for (int i = 0; i < n; i++)
            {
                swap(mat[i][j], mat[i][n - 1 - j]);
            }
        }
    }
};

/*
int n, x, y;
    unsigned ll a;
    cin >> n >> x >> y;
    cin >> a;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    x = n - x - 1;
    y = n - y - 1;

    string s = to_string(a);
    int ans = 0;
    for (int i = n - 1; i >= x; i--)
    {

        if (s[i] == '0' and i == x)
            ans++;
        else if (s[i] == '0' and y == i)
            ans++;
        else if (s[i] == '1' and x != i and y != i)
            ans++;
    }

    cout << ans << endl;
*/
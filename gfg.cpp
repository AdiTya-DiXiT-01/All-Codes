#include <bits/stdc++.h>

using namespace std;

string dir = "DLRU";
int di[] = {1, 0, -1, 0};
int dj[] = {-1, 0, 1, 0};

void four_path(int i, int j, string s, int m, int n, vector<vector<int>> &vis)
{
    if (i > m or i < 0 or j > n or j < 0 or vis[i][j] == 1)
        return;

    if (i == m and j == n)
    {
        cout << s << "\n";
        return;
    }

    for (int x = 0; x < n; x++)
    {
        four_path(i + di[x], j + dj[x], s + dir[i], m, n, vis);
        s.pop_back(); // instead of s.push_back() use s.emplace_back -> uses lesser time
    }
}

bool sub(int idx, int arr[], vector<int> &ds, int sum, int n, int k)
{
    if (idx == n)
    {
        if (sum % k == 0)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << "\n";
            return true;
        }
        return false;
    }

    if (sub(idx + 1, arr, ds, sum + arr[idx], n, k))
        return true;

    return 0;
}

int subset(int n, int m, int i , int j, int arr[], vector<vector<int>> &ds)
{

}

void printPattern(int n)
{
    int i, j;

    // To access rows of the square
    for (i = 1; i <= n; i++)
    {
        // To access columns of the square
        for (j = 1; j <= n; j++)
        {

            // For printing the required square pattern
            if ((i == 1 || i == n || j == 1 || j == n) ||
                (i >= 3 && i <= n - 2 && j >= 3 && j <= n - 2) &&
                    (i == 3 || i == n - 2 || j == 3 || j == n - 2))
            {
                // Prints star(*)
                printf("*");
            }
            else
            {
                // Prints space(" ")
                printf(" ");
            }
        }

        printf("\n");
    }
}
void paths(int i, int j, int m, int n, string s)
{
    if (i > m or j > n)
        return;

    if (i == m and j == n)
    {
        cout << s << endl;
        return;
    }

    s += 'R';
    paths(i + 1, j, m, n, s);
    s.pop_back();
    s += 'D';
    paths(i, j + 1, m, n, s);
    s.pop_back();
}

void paths2(int i, int j, int m, int n, string s)
{
    if (i == m and j == n)
    {
        cout << s << "\n";
        return;
    }
}

int subset_sum(int idx, int arr[], int n, int sum)
{
    if (sum == 0)
        return 1;

    if (idx == n)
    {
        if (sum == 0)
            return 1;

        return 0;
    }

    int l = 0, p = 0;

    if (sum - arr[idx] >= 0)
    {
        // sum -= arr[idx];
        p = subset_sum(idx, arr, n, sum - arr[idx]);
        // sum += arr[idx];
    }

    l = subset_sum(idx + 1, arr, n, sum);

    return l + p;
}

void ma1(int arr[], vector<vector<int>> &ds, int i, int j, int m, int n)
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int arr[] = {1, 2};
    // cout << subset_sum(0, arr, 2, 2) << endl;
    // int m, n;

    // IMP to define array of vectors use -> vector<int> arr[4];
    // for vectors use -> vector<int> vec (size of vector, type or vector of value to store in vector every element);
    printPattern(16);

    return 0;
}

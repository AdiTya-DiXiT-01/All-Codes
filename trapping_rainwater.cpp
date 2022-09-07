#include <bits/stdc++.h>

using namespace std;

int rain_water(vector<int> a)
{
    int n = a.size(), ans = 0;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and (a[st.top()] < a[i]))
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
                break;

            int diff = i - st.top() - 1;
            ans += (min(a[st.top()], a[i]) - a[cur]) * diff;
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> x = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << rain_water(x);

    return 0;
}

// BRUTE FORCE APPROACH USING LEFT MAX AND RIGHT MAX ARRAY OF THE GIVEN ARRAY

/*
int rain_water(int a[], int n)
{
    int ans = 0;
    int l[n] = {0};
    int r[n] = {0};

    int l_max = a[0];
    int r_max = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        l[i] = l_max;
        r[n - i - 1] = r_max;
        r_max = max(r_max, a[n - i - 1]);
        l_max = max(l_max, a[i]);
    }
    int x[n] = {0};
    for (int i = 0; i < n; i++)
    {
        x[i] += max(min(l[i], r[i]) - a[i], 0);
    }

    for (int i = 0; i < n; i++)
        ans += x[i];

    return ans;
}
*/
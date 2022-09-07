#include <bits/stdc++.h>

using namespace std;

vector<int> nxtSmall(int arr[], int n)
{
    vector<int> ans;
    stack<int> st;

    for (int i = n - 1; i >= 0; i++)
    {
        while (!st.empty() and st.top() <= arr[i])
            st.pop();

        if (st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(i);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> prevSmall(int arr[], int n)
{
    vector<int> ans;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and st.top() >= arr[i])
            st.pop();

        if (st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(i);
    }
    return ans;
}

int area(int arr[], int n)
{
    vector<int> ps = prevSmall(arr, n);
    vector<int> ns = nxtSmall(arr, n);
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int curr = (ns[i] - ps[i] - 1) * arr[i];
        ans = max(curr, ans);
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << area(a, n) << "\n";
    return 0;
}
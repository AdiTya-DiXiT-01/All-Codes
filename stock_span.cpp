#include <bits/stdc++.h>

using namespace std;

vector<int> stock_span(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int, int>> st;

    for (auto price : prices)
    {
        int days = 1;
        while (!st.empty() and st.top().first <= price)
        {
            days += st.top().second;
            st.pop();
        }
        st.push({price, days});
        ans.push_back(days);
    }
    return ans;
}

void stock_brute(int arr[], int n)
{

    //  BRUTE FORCE APPROACH

    int ans[n] = {0};

    for (int i = 0; i < n; i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] <= arr[i])
                days++;
            else
                break;
        }
        ans[i] = days;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> b = stock_span(a);
    for (auto i : b)
        cout << i << " ";
    cout << "\n";

    return 0;
}
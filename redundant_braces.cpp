#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    bool ans = false;
    cin >> str;
    stack<char> st;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '+' or str[i] == '-' or str[i] == '*' or str[i] == '/')
        {
            st.push(str[i]);
        }
        else if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (st.top() == '(')
                ans = true;

            while (st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/')
                st.pop();

            st.pop();
        }
    }

    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
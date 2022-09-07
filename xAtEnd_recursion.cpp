#include <bits/stdc++.h>

using namespace std;

string moveX(string x)
{
    if (x.length() == 0)
        return "";

    char ch = x[0];
    string ans = moveX(x.substr(1));

    if (ch == 'x')
        return ans + ch;

    return ch + ans;
}

int main()
{
    string s;
    cin >> s;

    cout << moveX(s);
    return 0;
}
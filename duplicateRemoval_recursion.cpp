/*
* Only for string of continous same characters
*/

#include <bits/stdc++.h>

using namespace std;

string removeDupli(string s)
{
    if (s.length() == 0)
        return "";

    char ch = s[0];
    string ans = removeDupli(s.substr(1));

    if (ch == ans[0])
        return ans;

    return ch + ans;
}

int main()
{
    string n;
    cin >> n;
    cout << removeDupli(n);
    return 0;
}
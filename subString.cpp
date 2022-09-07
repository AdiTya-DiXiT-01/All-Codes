#include <bits/stdc++.h>

using namespace std;

void subSeq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string a = to_string((int)ch);
    string ros = s.substr(1);

    subSeq(ros, ans);
    subSeq(ros, ans + ch);
    subSeq(ros, ans + a);
}

int main()
{
    string n;
    cin >> n;

    subSeq(n, "");

    return 0;
}
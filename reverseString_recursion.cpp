#include <bits/stdc++.h>

using namespace std;
/*
* First method to print the string reversed
void reverse(string str, int i)
{
    if (i > str.length() - 1)
        return;

    reverse(str, i + 1);

    cout << str.at(i);
}
*/

void reverse(string str)
{
    if (str.length() == 0)
        return;

    string restString = str.substr(1);
    reverse(restString);
    cout << str[0];
}
int main()
{
    string n;
    cin >> n;
    reverse(n);
    return 0;
}

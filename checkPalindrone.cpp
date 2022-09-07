#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n + 1];

    cin >> a;

    int i = 0;
    bool check = 1;
    while (a[i] != '\0')
    {
        if (a[i] != a[n - 1 - i])
        {
            check = 0;
            break;
        }
        i++;
    }

    if (check)
    {
        cout << "PAlindrone";
    }
    else
    {
        cout << "not";
    }

    return 0;
}
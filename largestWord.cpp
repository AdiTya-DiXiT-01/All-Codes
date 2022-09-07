#include <bits/stdc++.h>

using namespace std;
/*
*To enter sentence use getline func
*initialize char array with n+1
*ignore func used to clear buffer while entering string
*/
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];

    cin.getline(a, n);
    cin.ignore();
    int i = 0;
    int currLen = 0;
    int maxLen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (maxLen < currLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << a[i + maxst];
    }

    return 0;
}
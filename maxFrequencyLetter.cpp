#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "ajdjfjefieffffff";
    int n = str.length();
    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[str[i] - 'a']++;
    }
    int max = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ans = 'a' + i;
        }
    }
    cout << max << " " << ans << endl;
    return 0;
}
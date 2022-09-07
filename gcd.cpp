/*
*this method is euclid's algorithm to find GCD of two numbers
* gcd of two numbers is a-b = c
* then b-c till we reach 0
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y)
{
    int a = max(x, y);
    int b = min(x, y);

    while (a % b != 0)
    {
        int z = a % b;
        a = b;
        b = z;
    }
    return b;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << gcd(n, m);
    return 0;
}
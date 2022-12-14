#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int x = 1;
    int ans = 0;

    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }

    return ans;
}

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int decimalToBinary(int n)
{
    int ans = 0;
    int x = 1;

    while (x <= n)
        x *= 2;

    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;

        n -= x * lastDigit;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

string decimalToHexadecimal(int n)
{
    string ans = "";
    int x = 1;

    while (x <= n)
        x *= 16;

    x /= 16;

    while (x > 0)
    {
        int lastDigit = n / x;

        n -= x * lastDigit;
        x /= 16;

        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
    }
}
int32_t main()
{
    int a, b;

    cout << addBinary(a, b) << endl;
    return 0;
}
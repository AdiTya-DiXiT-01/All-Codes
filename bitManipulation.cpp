#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int map = ~(1 << pos);
    return (n & map);
}

int main()
{
    cout << getBit(5, 2) << "\n";
    cout << clearBit(5, 2) << "\n";
    cout << setBit(5, 1);
    return 0;
}
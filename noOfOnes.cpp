/*
*Program to find the nos. of 1's in the binary equi of a number
*/

#include <bits/stdc++.h>

using namespace std;

int noOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << noOfOnes(n);
    return 0;
}
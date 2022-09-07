#include <bits/stdc++.h>

using namespace std;

int knapsack(int val[], int wgh[], int n, int W)
{
    if (n == 0 || W == 0)
        return 0;

    if (wgh[n - 1] > W)
        return knapsack(val, wgh, n - 1, W);

    return max(knapsack(val, wgh, n - 1, W - wgh[n - 1]) + val[n - 1], knapsack(val, wgh, n - 1, W));
}

int main()
{
    int wgh[] = {10, 20, 30};
    int val[] = {100, 50, 150};
    cout << knapsack(val, wgh, 3, 50);
    return 0;
}

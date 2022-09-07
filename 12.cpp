#include <bits/stdc++.h>

using namespace std;

void subset_sum(int idx, int arr[], vector<int> &ds, int n, int sum, int k)
{
    if (idx == n)
    {
        if (sum % k == 0 and ds.size() != 0)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[idx]);
    sum += arr[idx];
    subset_sum(idx + 1, arr, ds, n, sum, k);
    sum -= arr[idx];
    ds.pop_back();
    subset_sum(idx + 1, arr, ds, n, sum, k);
}

int num_subset(int idx, int arr[], int sum, int n, int k)
{
    if (idx == n)
    {
        if (sum % k == 0)
            return 1;

        return 0;
    }
    sum += arr[idx];
    int pick = num_subset(idx + 1, arr, sum, n, k);
    sum -= arr[idx];
    int leave = num_subset(idx + 1, arr, sum, n, k);

    return pick + leave;
}

void subset(int idx, int arr[], vector<int> &ds, int n)
{
    if (idx == n)
    {
        for (auto it : ds)
            cout << it << " ";
        cout << "\n";

        return;
    }

    ds.push_back(arr[idx]);
    subset(idx + 1, arr, ds, n);
    ds.pop_back();
    subset(idx + 1, arr, ds, n);
}

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     vector<int> ds;
//     int arr[] = {1, 2, 4, 5, 6};
//     // subset(0, arr, ds, 7);
//     // subset_sum(0, arr, ds, 5, 0, 3);
//     cout << num_subset(0, arr, 0, 5, 3) - 1 << "\n";
//     return 0;
// }

int cf(int arr[])
{
}

int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
    // int a[] = {1, 2, 4, 6, 11, 88, 101};
    // cout << binarySearch(a, 7, 101, 0, 6) << endl;
    // cout << binarySearch(a, 7, 33, 0, 6) << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << cf(arr, n) << "\n";

    return 0;
}

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        if (l1->next == NULL)

            if (l1->val + l2->val < 10)
                ListNode *head = new ListNode(l1->val + l2->val);

        ListNode *temp = addTwoNumbers(l1->next, l2->next);
    }
};
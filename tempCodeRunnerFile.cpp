#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mid1 = n / 4;
    
    for (int i = 0; i < mid1; i++)
    {
        for (int j = 0; j < mid1 - i - 1; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    for (int i = mid1 - 1; i >= 0; i--)
    {
        for (int j = 0; j < mid1 - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
    cout << "\n";

    return 0;
}
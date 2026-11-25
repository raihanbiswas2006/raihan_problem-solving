// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        mx = max(mx, x);
    }

    cout << mx << "\n";

    return 0;
}
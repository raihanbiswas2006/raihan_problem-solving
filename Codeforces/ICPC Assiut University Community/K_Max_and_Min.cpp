// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long mn = min({a, b, c});
    long long mx = max({a, b, c});

    cout << mn << " " << mx << "\n";

    return 0;
}
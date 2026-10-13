// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <stdio.h>
int main()
{
    int n, mx = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > mx)
        {
            mx = val;
        }
    }
    printf("%d", mx);

    return 0;
}
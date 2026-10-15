//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<stdio.h>
int main(){
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
    }
    printf("%d", idx);

    return 0;
}
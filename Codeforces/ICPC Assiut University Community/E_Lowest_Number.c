//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mn = INT_MAX;
    int mn_idx;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            mn_idx = i+1;
        }
        
    }
    printf("%d %d", mn, mn_idx);

    return 0;
}
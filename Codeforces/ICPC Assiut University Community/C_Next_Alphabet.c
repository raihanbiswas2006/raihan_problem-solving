// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include <stdio.h>
int main()
{
    char letter;
    scanf(" %c", &letter);
    if (letter == 'z')
    {
        letter = 'a';
    }
    else
    {
        letter++;
    }
    printf("%c\n", letter);

    return 0;
}
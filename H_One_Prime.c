// link = https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219432

#include <stdio.h>
int main()
{
    int T, N;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        long long int value = 1;
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            value = value * i;
        }
        printf("%lld\n", value);
    }
    return 0;
}
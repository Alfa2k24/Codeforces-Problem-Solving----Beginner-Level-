/*

problem Name =>  Z. Three Numbers
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432

 */

#include <stdio.h>
int main()
{
    int K, S;
    scanf("%d %d", &K, &S);

    int count = 0;

    for (int x = 0; x <= K; x++)
    {
        for (int y = 0; y <= K; y++)
        {
            int z = S - x - y;
            if (z >= 0 && z <= K)
            {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
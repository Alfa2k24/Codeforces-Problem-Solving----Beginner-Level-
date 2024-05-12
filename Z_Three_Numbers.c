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
            for (int z = 0; z <= K; z++)
            {
                if (x + y + z == S)
                {
                    count++;
                }
            }
        }
    }

    printf("%d", count);
    return 0;
}
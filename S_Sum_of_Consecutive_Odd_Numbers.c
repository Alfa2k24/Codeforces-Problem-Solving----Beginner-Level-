#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int oddSum = 0;
        if (y < x)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 1)
            {
                oddSum += i;
            }
        }
        printf("%d\n", oddSum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, m;

    while (1)
    {
        scanf("%d %d", &n, &m);

        if (n <= 0 || m <= 0)
        {
            break;
        }
        else
        {
            if (m < n)
            {
                int temp = n;
                n = m;
                m = temp;
            }
            int sum = 0;
            for (int i = n; i <= m; i++)
            {
                sum = sum + i;
                printf("%d ", i);
            }
            printf("sum =%d", sum);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char ch;
    int t, n;
    scanf("%c", &ch);
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        scanf("%d ", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
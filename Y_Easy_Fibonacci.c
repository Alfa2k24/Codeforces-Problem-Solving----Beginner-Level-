#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;

    int n;
    scanf("%d", &n);

    printf("%d ", a);
    for (int i = 1; i < n; i++)
    {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
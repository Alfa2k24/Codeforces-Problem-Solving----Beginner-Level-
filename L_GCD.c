#include <stdio.h>
int main()
{
    int a, b, value;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            value = i;
        }
    }
    printf("%d", value);
}
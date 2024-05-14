#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    long long int sum = x + y;
    long long int mul = x * y;
    long long int sub = x - y;
    printf("%d + %d = %lld\n", x, y, sum);
    printf("%d * %d = %lld\n", x, y, mul);
    printf("%d - %d = %lld\n", x, y, sub);

    return 0;
}
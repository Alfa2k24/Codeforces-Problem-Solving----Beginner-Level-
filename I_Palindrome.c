// Problem Link  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <stdio.h>

int reverseNumber(int n)
{
    int reverseValue = 0;
    while (n != 0)
    {
        reverseValue = (reverseValue * 10) + (n % 10);
        n = n / 10;
    }
    return reverseValue;
}

int main()
{
    int n;
    scanf("%d", &n);

    int value = reverseNumber(n);
    //    printf("%d",value);

    if (value == n)
    {
        printf("%d\nYES", value);
    }
    else
    {
        printf("%d\nNO", value);
    }
}

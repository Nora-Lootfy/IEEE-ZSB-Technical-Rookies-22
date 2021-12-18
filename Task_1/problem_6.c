#include <stdio.h>

int sum(int);

void main()
{
    int number;

    scanf("%d", &number);
    printf("%d\n", sum(number));
}

int sum(int n)
{
    if (n == 1)
        return 1;

    return sum(n - 1) + n;
}
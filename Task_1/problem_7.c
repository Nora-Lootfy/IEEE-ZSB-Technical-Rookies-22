#include <stdio.h>

void main()
{
    int number;
    int sum = 0;
    scanf("%d", &number);

    for (int i = number; i > 2; i--)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("%d\n", sum);
}
#include <stdio.h>
#include <stdlib.h>

int sumByForLoop(int *, int);
int sumByWhileLoop(int *, int);
int sumByRecursion(int *, int);

void main()
{
    int count;
    int *numbers;

    scanf("%d", &count);
    numbers = (int *)malloc(count * sizeof(int));

    for (int i = 0; i < count; i++)
    {
        scanf("%d", (numbers + i));
    }

    printf("%d\n", sumByForLoop(numbers, count));
    printf("%d\n", sumByWhileLoop(numbers, count));
    printf("%d\n", sumByRecursion(numbers, count));
}

int sumByForLoop(int *numbers, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += *(numbers + i);
    return sum;
}

int sumByWhileLoop(int *numbers, int count)
{
    int sum = 0;
    while (count-- != 0)
        sum += *(numbers + count);
    return sum;
}

int sumByRecursion(int *numbers, int count)
{
    if (count-- != 0)
        return *(numbers + count) + sumByRecursion(numbers, count);

    return 0;
}
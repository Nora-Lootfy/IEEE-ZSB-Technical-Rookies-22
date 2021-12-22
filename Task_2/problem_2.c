#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int *, int);
void main()
{
    int *numbers;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));

    printf("Enter (sorted)elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", numbers + i);

    printf("Elements before removing duplicates:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(numbers + i));

    n = removeDuplicates(numbers, n);

    printf("\nElements after removing duplicates:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(numbers + i));
}

int removeDuplicates(int *numbers, int n)
{
    int pivot = 0, pointer = 1;
    while (pointer < n)
    {
        if (*(numbers + pivot) != (*(numbers + pointer)))
        {
            *(numbers + pivot + 1) = *(numbers + pointer);
            pivot++;
        }
        pointer++;
    }
    numbers = realloc(numbers, (pivot + 1) * sizeof(int));
    return pivot + 1;
}
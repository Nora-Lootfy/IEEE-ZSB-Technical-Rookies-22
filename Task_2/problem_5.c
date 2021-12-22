#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *, int);

void main()
{
    int *numbers;
    int n;
    int min;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", numbers + i);

    printf("Elements before Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(numbers + i));

    insertionSort(numbers, n);

    printf("\nElements after Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", *(numbers + i));
}

void insertionSort(int *A, int n)
{
    int key;
    int j;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        key = *(A + i);
        while (j >= 0 && key < *(A + j))
        {
            *(A + j + 1) = *(A + j);
            j--;
        }
        *(A + j + 1) = key;
    }
}
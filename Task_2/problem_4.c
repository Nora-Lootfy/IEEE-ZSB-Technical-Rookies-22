#include <stdio.h>
#include <stdlib.h>
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
    min = n;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                min = (min > j - i) ? j - i : min;
                break;
            }
        }
    printf("min distance : %d\n", min);
}
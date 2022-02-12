#include <stdio.h>
#include <stdlib.h>

void circularArrayRotation(int* arr, int n, int k)
{
    int *temp = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n ; i++)
        temp[(i + k) % n] = *(arr + i);
    
    for(int i = 0; i < n ; i++)
        arr[i] = temp[i];
}

int main()
{
    int n, k, q;
    int index;
    int *arr;

    scanf("%d%d%d", &n, &k, &q);
    arr = (int*)malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);
    
    circularArrayRotation(arr, n, k);

    for(int i = 0; i < q; i++)
    {
        scanf("%d", &index);
        printf("%d\n", *(arr + index));
    }
    return 0;
}
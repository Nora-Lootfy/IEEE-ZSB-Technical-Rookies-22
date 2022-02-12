#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    return (a < b)? a : b;
}

int search(int num, int *arr, int i, int n)
{
    int count = 0;

    for(int j = i + 1; j < n; j++)
        count += num == arr[j];

    return count;
}

int beautifulTriplets(int d, int n, int* arr)
{
    //arr is an increasing sequence of integers
    //that means if we found a number which is greater that a number by d and 2 * d
    //it satistifies the relation i < j < k

    int count = 0;

    for(int i = 0; i <= n - 3; i++)
        //search for two numbers greater than arr[i] by d and 2 * d
        count += min(search(arr[i] + d, arr, i, n) ,search(arr[i] + 2 * d, arr, i, n));
    
    return count;
}

int main()
{
    int n, d;
    int *arr;

    scanf("%d%d", &n, &d);

    arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);

    printf("%d\n", beautifulTriplets(d, n, arr));

    return 0;
}
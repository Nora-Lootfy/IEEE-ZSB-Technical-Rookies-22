#include <stdio.h>
int binarySearch(int[], int, int, int);
void main()
{
    int numbers[] = {1, 2, 4, 7, 21, 23, 65, 67, 75, 66, 300};
    int key;
    int index;
    int count = sizeof(numbers) / sizeof(numbers[0]);

    scanf("%d", &key);
    if ((index = binarySearch(numbers, key, 0, count - 1)) == -1) // binarySearch returns the index of the element if found if not returns -1
        printf("404 not found!\n");
    else
        printf("The number %d is in %d location\n", key, index + 1);
}

int binarySearch(int numbers[], int key, int start, int end)
{
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    if (key == numbers[mid])
        return mid;
    else if (key > numbers[mid])
        binarySearch(numbers, key, mid + 1, end);
    else
        binarySearch(numbers, key, start, mid - 1);
}
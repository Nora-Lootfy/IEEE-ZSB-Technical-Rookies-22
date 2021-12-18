#include <stdio.h>

void main()
{
    int length, width;

    scanf("%d%d", &length, &width);

    printf("The area: %d\n", length * width);
    printf("The perimeter: %d\n", (length + width) * 2);
}
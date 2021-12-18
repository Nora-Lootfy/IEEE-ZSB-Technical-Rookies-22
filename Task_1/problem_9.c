#include <stdio.h>

void main()
{
    // generate fibonacci
    int n;
    int previous = 1;
    int number = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", previous);
        previous += number;
        number = previous - number;
    }
}
#include <stdio.h>
#include <math.h>
int isPrime(int);
void main()
{
    int number;

    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        if (isPrime(i))
            printf("%d\t", i);
    }
    printf("\n");
}
int isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}
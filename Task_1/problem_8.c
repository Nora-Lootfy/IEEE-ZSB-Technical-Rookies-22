#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    // guessing game
    // generate random number 1 --> 10
    srand(time(NULL));
    int r = (rand() % 10) + 1;
    // ask user for number
    int n = 0;
    int count = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != r)
    {
        count++;
        printf("Try again: ");
        scanf("%d", &n);
    }
    // display number of trials
    printf("Number of trials : %d\n", count);
    // correct number
    printf("%d\n", r);
}
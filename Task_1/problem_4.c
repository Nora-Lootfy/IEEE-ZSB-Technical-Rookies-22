#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void main()
{
    char *s;
    int count;
    int index = 0;
    s = (char *)malloc(1000 * sizeof(char));
    gets(s);
    s = (char *)realloc(s, strlen(s) + 1);
    puts(s);

    for (int i = 1; i <= MAX; i++)
        printf("*");
    printf("\n*");
    count = 1;
    while (s[index] != '\0')
    {
        if (s[index] == ' ')
        {
            for (int i = count; i < MAX - 1; i++)
                printf(" ");
            printf("*\n*");
            index++;
            count = 1;
        }
        putchar(s[index]);
        count++;
        index++;
    }
    for (int i = count; i < MAX - 1; i++)
        printf(" ");
    printf("*\n");
    for (int i = 1; i <= MAX; i++)
        printf("*");
    printf("\n");
}
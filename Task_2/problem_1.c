#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrom(char *);
void main()
{
    char *s = (char *)malloc(1000);
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);
    printf("%s\n", (isPalindrom(s) == 1) ? "Yes" : "No");
}

int isPalindrom(char *s)
{
    for (int i = 0; i <= strlen(s) / 2; i++)
        if ((*(s + i) - *(s + strlen(s) - 1 - i)) != 0 && abs(*(s + i) - *(s + strlen(s) - 1 - i)) != ('a' - 'A'))
            return 0;
    return 1;
}
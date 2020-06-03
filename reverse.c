#include <stdio.h>
#include <stdlib.h>

int length(char str[])
{
    int l = 0;
    while (str[l] != '\0')
        ++l;
    return l;
}

void reverse(char reversed[], char str[], int len)
{
    int i = 0;
    while (str[i] != '\0')
    {
        reversed[len - i - 1] = str[i];
        ++i;
    }
    reversed[len] = '\0';
}

void main()
{
    char str[] = "Hello there!";
    int len = length(str);
    char reversed[len];
    reverse(reversed, str, len);
    printf("Reversed: %s\n", reversed);
}

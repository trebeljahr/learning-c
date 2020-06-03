#include <stdio.h>
#include <stdlib.h>

int getLength(char str[])
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

void initReverse()
{
    char str[] = "Hello world";
    int len = getLength(str);
    char reversed[len];
    reverse(reversed, str, len);
    printf("String: %s\n", str);
    printf("Reversed: %s\n", reversed);
}

void main()
{
    initReverse();
    char *line = NULL;
    size_t length = 0;
    ssize_t read;
    while (printf("Your string: ") &&
           (read = getline(&line, &length, stdin)) != -1)
    {
        int len = getLength(line);
        char reversed[len];
        reverse(reversed, line, len);
        printf("Reversed: %s\n", reversed);
    }
}

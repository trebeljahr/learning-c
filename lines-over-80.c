#include <stdio.h>
#include <stdlib.h>

#define FILTERLENGTH 10

int getLength(char str[])
{
    int c;

    c = 0;

    while (str[c] != '\0')
    {
        c++;
    }
    return c;
}

void append(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i + getLength(from)] = from[i]) != '\0')
    {
        ++i;
    }
}

void main()
{
    char *line = NULL;
    char *longerLines = NULL;
    size_t length = 0;
    ssize_t read;
    while ((read = getline(&line, &length, stdin)) != -1)
    {
        if (read - 1 > FILTERLENGTH)
        {
            longerLines = realloc(longerLines, read + 1);
            append(longerLines, line);
        }
    }
    printf("\n-------------------------------------------------------------");
    printf("\nThese lines had over %d chars: %s\n", FILTERLENGTH, longerLines);

    free(longerLines);
}

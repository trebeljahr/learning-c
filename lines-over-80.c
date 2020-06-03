#include <stdio.h>
#include <stdlib.h>

#define FILTERLENGTH 10

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

void printLine()
{
    printf("\n-------------------------------------------------------------\n");
}

void main()
{
    char *line = NULL;
    char **longerLines;
    size_t length = 0;
    ssize_t read;
    int l = 0;
    while ((read = getline(&line, &length, stdin)) != -1)
    {
        if (read - 1 > FILTERLENGTH)
        {
            longerLines = malloc(l);
            longerLines[l] = malloc((read + 1));

            copy(longerLines[l], line);
            ++l;
        }
    }
    printLine();
    printf("These lines had over %d chars:\n", FILTERLENGTH);
    for (int i = 0; i < l; i++)
    {
        printf("%s\n", longerLines[i]);
        free(longerLines[i]);
    }
    printLine();
    free(longerLines);
}

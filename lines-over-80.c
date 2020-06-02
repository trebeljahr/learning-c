#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILTERLENGTH 10

void concatenate_string(char *original, char *add)
{
    while (*original)
        original++;

    while (*add)
    {
        *original = *add;
        add++;
        original++;
    }
    *original = '\0';
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
            concatenate_string(longerLines, line);
        }
    }
    printf("\n-------------------------------------------------------------");
    printf("\nThese lines had over %d chars: %s", FILTERLENGTH, longerLines);

    free(longerLines);
}

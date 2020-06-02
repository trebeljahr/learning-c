#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILTERLENGTH 10

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
            int len = 0;
            while (longerLines[len] != '\0')
            {
                len++;
            }
            longerLines = realloc(longerLines, len + read + 1);

            int d = 0;
            while (*line != '\0')
            {
                longerLines[len] = line[d];
                d++;
                len++;
            }
        }
    }
    printf("\n-------------------------------------------------------------");
    printf("\nThese lines had over %d chars: %s", FILTERLENGTH, longerLines);

    free(longerLines);
}

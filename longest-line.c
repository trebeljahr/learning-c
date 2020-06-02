#include <stdio.h>
#include <stdlib.h>

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

void main()
{
    int max = 0;
    char *line = NULL;
    char *longestLine = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, stdin)) != -1)
    {
        if (max < read - 1)
        {
            max = read - 1;
            longestLine = realloc(longestLine, read);
            copy(longestLine, line);
        }
    }
    printf("\nThis is was the longest line: %s", longestLine);
    printf("\nIt was %d characters long. \n", max);

    free(longestLine);
}

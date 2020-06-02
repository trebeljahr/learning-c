#include <stdio.h>
#include <string.h>

char *readLine();
void copy(char to[], char from[]);
/* print the longest input line */
void main()
{
    int len; /* current line length */
    int max;
    char *input = NULL;  /* maximum length seen so far */
    char longest[] = ""; /* longest line saved here */
    max = 0;
    while ((input = readLine()) > 0)
    {
        if (strlen(input) > max)
        {
            max = len;
            copy(longest, input);
        }
        input = NULL;
    }
    if (max > 0) /* there was a line */
        printf("%s", longest);
}
/* readLine: read a line into s, return length */
char *readLine()
{
    char *line = NULL;
    char a;
    int c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        a = c;
        strcat(line, &a);
    }
    if (c == '\n')
    {
        a = c;
        strcat(line, &a);
    }
    a = c;
    strcat(line, &a);
    return line;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while (from[i] != '\0')
        strncat(to, &from[i], 1);
}
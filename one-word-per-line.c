
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
void main()
{
    int c, nw, state;
    state = OUT;
    nw = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            putchar('\n');
            putchar(c);
            state = IN;
            ++nw;
        }
        else
        {
            putchar(c);
        }
    }
    printf("\nNumber of words total: %d \n", nw);
}
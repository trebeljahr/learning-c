#include <stdio.h>
#include <stdlib.h>

void withAndOr(char s[], int lim)
{
    printf("Using loop with and/or\n");
    printf("Now type whatever you want: ");
    int c;
    for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
}
void withoutAndOr(char s[], int lim)
{
    printf("Using loop without and/or\n");
    printf("Now type whatever you want: ");
    for (int i = 0; i < lim - 1; ++i)
    {
        char a = getchar();
        if (a == '\n')
            i = lim;
        else if (a == EOF)
            i = lim;
        else
            s[i] = a;
    }
}

int main()
{
    int lim = 5;
    char a[lim];
    printf("Type 1 for loop with and/or or \n");
    printf("type 2 for loop without and/or: \n");
    int c;
    char buf[1024]; // use 1KiB just to be sure

    do
    {
        printf("enter a number: ");
        if (!fgets(buf, 1024, stdin))
            return 1;
        c = atoi(buf);
    } while (a == 0);

    if (c == 1)
        withAndOr(a, lim);

    if (c == 2)
        withoutAndOr(a, lim);

    printf("\nHere are the first %d letters you typed: %s\n", lim - 1, a);

    return 0;
}
#include <stdio.h>
#define IN 1
#define OUT 0
#define HL 9

void main()
{
    int input, state, wordlength;
    state = OUT;
    wordlength = 0;
    int histogram[HL + 1];
    for (int i = 0; i <= HL; ++i)
        histogram[i] = 0;
    while ((input = getchar()) != EOF)
    {
        if (state == IN)
        {
            if (input == ' ' || input == '\n' || input == '\t')
                state = OUT;
            else
                ++wordlength;
        }
        else if (!(input == ' ' || input == '\n' || input == '\t'))
        {
            if (wordlength >= HL)
                histogram[HL] = histogram[HL] + 1;
            else
                histogram[wordlength] = histogram[wordlength] + 1;

            state = IN;
            wordlength = 1;
        }
    }
    if (state == IN)
        histogram[wordlength] = histogram[wordlength] + 1;

    for (int i = 1; i <= HL; i++)
    {
        printf("\n%d:", i);
        for (int j = 0; j < histogram[i]; j++)
            printf("=");
    }
    printf("\n");
}
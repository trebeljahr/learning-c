#include <stdio.h>

void line()
{
    printf("\n----------------------------------\n");
}

void printEOFidea()
{
    line();
    printf("Press CONTROL+D to show ideas about EOF\n");
    printf("getchar() != EOF == %d\n", getchar() != EOF);
    printf("EOF: %d \n", EOF);
    line();
}

void countingThings()
{
    printf("Now type something. Press CONTROL+D when finished typing. \n");
    int input, chars, lines, tabs, spaces;
    chars = spaces = tabs = 0;
    lines = 1;
    while ((input = getchar()) != EOF)
    {
        ++chars;
        if (input == '\n')
            ++lines;
        if (input == '\t')
            ++tabs;
        if (input == ' ')
            ++spaces;
    }
    line();
    printf("\n# of characters total: %d\n", chars);
    printf("# of lines total: %d\n", lines);
    printf("# of tabs total: %d\n", tabs);
    printf("# of spaces total: %d\n", spaces);
}

void replaceBlanks()
{
    printf("Now type something. Press CONTROL+D when finished typing. \n");
    int input, lastInput;
    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
        {
            if (lastInput != ' ')
                putchar(input);
        }
        else
            putchar(input);
        lastInput = input;
    }
}

void escapeStrings()
{
    printf("Now type something. Press CONTROL+D when finished typing. \n");
    int input;
    while ((input = getchar()) != EOF)
    {
        if (input == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (input == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (input == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(input);
    }
}

void main()
{
    // printEOFidea();
    // countingThings();
    // replaceBlanks();
    escapeStrings();
}

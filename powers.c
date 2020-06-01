
#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

void main()
{
    printf("2^3: %d\n", power(2, 3));
    printf("2^4: %d\n", power(2, 4));
    printf("2^10: %d\n", power(2, 10));
    printf("3^2: %d\n", power(3, 2));
    printf("3^3: %d\n", power(3, 3));
    printf("5^2: %d\n", power(5, 2));
    printf("5^3: %d\n", power(5, 3));
    printf("5^0: %d\n", power(5, 0));
    printf("5^1: %d\n", power(5, 1));
    printf("1^1: %d\n", power(1, 1));
    printf("1^0: %d\n", power(1, 0));
}
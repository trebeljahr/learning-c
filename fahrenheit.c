#include <stdio.h>

void fahrenheitToCelsius()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    printf("----------------------------------\n");
    printf("Fahrenheit to Celsius Conversion\n");
    printf("----------------------------------\n");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        // %6.2f is the precision formatting of a float value.
        printf("°F:%3.0f | °C:%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("----------------------------------\n");
}

void celsiusToFahrenheit()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -40; /* lower limit of temperature scale */
    upper = 60;  /* upper limit */
    step = 5;    /* step size */
    celsius = lower;
    printf("----------------------------------\n");
    printf("Celsius to Fahrenheit Conversion\n");
    printf("----------------------------------\n");
    while (celsius <= upper)
    {
        fahr = celsius * 9 / 5 + 32;
        printf("°C:%3.0f | °F:%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("----------------------------------\n");
}

void main()
{
    fahrenheitToCelsius();
    celsiusToFahrenheit();
}

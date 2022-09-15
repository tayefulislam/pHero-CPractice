#include <stdio.h>

// Celsius to Fahrenheit

int main()
{
    float c, f;
    printf("Write C value:");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit is %f \n", f);

    return 0;
}
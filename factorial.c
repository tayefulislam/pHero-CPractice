#include <stdio.h>

int main()
{

    int i, number, fact = 1;
    printf("Plase enter a posivite or valid number:");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("%d is a nagative number\n", number);
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            fact *= i;
        }

        printf("Factorial of %d is %d\n", number, fact);
    }

    return 0;
}
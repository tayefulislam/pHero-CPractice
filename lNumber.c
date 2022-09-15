#include <stdio.h>

int main()
{
    float number1, number2, number3;
    printf("Please enter an number one by one (like :12 13 14):");
    scanf("%f %f %f", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%.2lf is largest number.\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%.2lf is the largest number\n", number2);
    }
    else
    {
        printf("%.2lf is the largest number \n", number3);
    }
    return 0;
}
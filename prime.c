#include <stdio.h>

int main()
{
    int number, i, flag = 0;
    printf("Plase enter a number to check prime number:");
    scanf("%d", &number);
    for (i = 2; i < number / 2; i++)
    {

        if (number % i == 0)
        {
            printf("%d is not a prime number.\n", number);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number\n", number);
    }
    return 0;
}
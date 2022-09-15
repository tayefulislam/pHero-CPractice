#include <stdio.h>
int main()
{
    int number;
    printf("Plase enter a valid number:");
    scanf("%d", &number);
    // if (number % 2 == 0)
    // {
    //     printf("Number is even\n");
    // }
    // else
    // {
    //     printf("Number is odd\n");
    // }

    (number % 2 == 0) ? printf("Number is even\n") : printf("Number is odd\n");
    return 0;
}
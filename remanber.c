#include <stdio.h>

int main()
{
    int number, i;
    printf("Please enter a number:");
    scanf("%d", &number);
    printf("Factor of %d\n", number);

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
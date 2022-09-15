#include <stdio.h>

int main()
{
    float bankBalance, withdrawBalance;
    printf("Plase enter Bank Balance:");
    scanf("%f", &bankBalance);
    printf("Please enter withdwar balance:");
    scanf("%f", &withdrawBalance);

    if (bankBalance >= withdrawBalance)
    {
        printf("Withdraw Succefully\n");
    }
    else
    {
        printf("Can't withdraw\n");
    }

    return 0;
}
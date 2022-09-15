#include <stdio.h>

int main()
{
    int birthYear, currentYear;

    printf("Please Enter Your birth Year:");
    scanf("%d", &birthYear);
    currentYear = 2022 - birthYear;
    printf("Your age is : %d\n", currentYear);
    return 0;
}